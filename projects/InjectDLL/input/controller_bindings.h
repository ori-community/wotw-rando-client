#pragma once

#include <input/enums/actions.h>

namespace input
{
    void refresh_controller_controls();
    bool is_controller_pressed(Action action);
}
