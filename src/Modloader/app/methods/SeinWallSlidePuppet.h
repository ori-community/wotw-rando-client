#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SeinWallSlidePuppet.h>

namespace app::classes::SeinWallSlidePuppet {
    IL2CPP_REGISTER_METHOD(0x00AB4D20, int32_t, get_Id, app::SeinWallSlidePuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPerform, app::SeinWallSlidePuppet* this_ptr, int32_t event_id, app::Object__Array* parameters)
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinWallSlidePuppet* this_ptr)
} // namespace app::classes::SeinWallSlidePuppet
