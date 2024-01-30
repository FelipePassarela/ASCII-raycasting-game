#ifndef RAY_HPP
#define RAY_HPP

#include <iostream>
#include <vector>

class Ray
{
private:
    double angle = 0.0f;
    double distance = 0.0f;
    const double steps = 0.1f;
    std::vector<std::pair<double, double>> points;

public:
    Ray() {}

    Ray(double angle) : angle(angle) {}

    ~Ray() {}

    /* <------------------------ Getters ------------------------> */

    double getAngle() const {    return angle;    }

    double getDistance() const {    return distance;    }

    std::vector<std::pair<double, double>> getPoints() const {    return points;    }

    /* <------------------------ Setters ------------------------> */

    void setAngle(double newAngle) {    angle = newAngle;    }

    void setDistance(double newDistance) {    distance = newDistance;    }

    void setPoints(std::vector<std::pair<double, double>> newPoints) {    points = newPoints;    }

    /* <------------------------ Methods ------------------------> */

    void castRay(double playerX, double playerY, double FOV, std::vector<std::string> map);
    
};

#endif