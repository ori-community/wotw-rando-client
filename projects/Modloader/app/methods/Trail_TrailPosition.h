#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Trail_TrailPosition__Boxed.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Trail_TrailPosition {
    IL2CPP_REGISTER_METHOD(0x0011CB90, void, ctor, (app::Trail_TrailPosition__Boxed * this_ptr, app::Vector3 position, float start_time))
}
