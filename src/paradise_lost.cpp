#include "paradise_lost.h"

using namespace godot;

void ParadiseLost::_register_methods() {
    register_method("_process", &ParadiseLost::_process);
    register_property<ParadiseLost, float>("amplitude", &ParadiseLost::amplitude, 10.0);
    register_property<ParadiseLost, float>("speed", &ParadiseLost::set_speed, &ParadiseLost::get_speed, 1.0);
}

ParadiseLost::ParadiseLost() {
}

ParadiseLost::~ParadiseLost() {
    // Add cleanup here.
}

void ParadiseLost::_init() {
    // Initialize variables here
    time_passed = 0.0;
    amplitude = 10.0;
    speed = 1.0;
}

void ParadiseLost::_process(float delta) {
    time_passed += speed * delta;

    Vector2 new_position = Vector2(
        amplitude + (amplitude * sin(time_passed * 2.0)),
        amplitude + (amplitude * cos(time_passed * 1.5))
    );

    set_position(new_position);
}

void ParadiseLost::set_speed(float p_speed) {
    speed = p_speed;
}

float ParadiseLost::get_speed() {
    return speed;
}
