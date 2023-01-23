#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SeinPositionAndDirectionTracker.h>

namespace app::classes::SeinPositionAndDirectionTracker {
    IL2CPP_REGISTER_METHOD(0x005C8CD0, app::Vector3, get_Speed, (app::SeinPositionAndDirectionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C8DF0, void, FixedUpdate, (app::SeinPositionAndDirectionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C91A0, void, Update, (app::SeinPositionAndDirectionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C94C0, void, ctor, (app::SeinPositionAndDirectionTracker * this_ptr))
} // namespace app::classes::SeinPositionAndDirectionTracker
