#ifndef RENDER_SERVER_H
#define RENDER_SERVER_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class RenderServer : public Sprite2D {
    GDCLASS(RenderServer, Sprite2D)

private:
    double time_passed;

protected:
    static void _bind_methods();

public:
    RenderServer();
    ~RenderServer();

    void _process(double delta);
};

}

#endif
