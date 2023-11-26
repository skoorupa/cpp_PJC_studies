#include <iostream>
#include <SFML/Graphics.hpp>
#include <ctime>

auto checkPosition(sf::Event event, auto shape) -> bool;

auto checkBoundaries(auto &shape, auto shapeSizeX, auto shapeSizeY, sf::RenderWindow &window, float &Xspeed,
                     float &Yspeed) -> sf::Vector2<float>;


int main() {

    srand(time(0));

    auto window = sf::RenderWindow(sf::VideoMode(500, 500), "Zadanie1");
    auto event = sf::Event();
    float speed = 0.05;
    float XMovement = speed, YMovement = speed;
    auto circleSize = 50;
    auto circle = sf::CircleShape(circleSize);
    circle.setFillColor(sf::Color::Red);
    while (window.isOpen()) {
        window.clear();
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed) {
                if (checkPosition(event, circle)) {
                    circle.setFillColor(sf::Color(rand() % 255, rand() % 255, rand() % 255));
                }
            }
        }

        circle.move(
                checkBoundaries(circle, circle.getRadius() * 2, circle.getRadius() * 2, window, XMovement, YMovement));
        window.draw(circle);
        window.display();
    }
    return 0;
}

auto checkPosition(sf::Event event, auto shape) -> bool {
    return event.mouseButton.x > shape.getPosition().x &&
        event.mouseButton.x < shape.getPosition().x + shape.getRadius() * 2 &&
        event.mouseButton.y > shape.getPosition().y &&
        event.mouseButton.y < shape.getPosition().y + shape.getRadius() * 2;


}

auto checkBoundaries(auto &shape, auto shapeSizeX, auto shapeSizeY, sf::RenderWindow &window, float &Xspeed,
                     float &Yspeed) -> sf::Vector2<float> {
    if (shape.getPosition().x + shapeSizeX > window.getSize().x || shape.getPosition().x < 0)
        Xspeed = -Xspeed;
    if (shape.getPosition().y + shapeSizeY > window.getSize().y || shape.getPosition().y < 0)
        Yspeed = -Yspeed;
    return {Xspeed,Yspeed};
}

