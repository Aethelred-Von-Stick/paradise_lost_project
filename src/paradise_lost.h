#ifndef PARADISE_LOST_H
#define PARADISE_LOST_H

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot {

class ParadiseLost : public Sprite {
    GODOT_CLASS(ParadiseLost, Sprite)

private:
    float time_passed;
    float amplitude;
    float speed;

public:
    static void _register_methods();

    ParadiseLost();
    ~ParadiseLost();

    void _init();

    void _process(float delta);
    void set_speed(float p_speed);
    float get_speed();
};

}

#endif
