#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkPositionArray.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::AkPositionArray {
    IL2CPP_REGISTER_METHOD(0x0188F550, void, ctor, (app::AkPositionArray * this_ptr, uint32_t in__count))
    IL2CPP_REGISTER_METHOD(0x00529E80, uint32_t, get_Count, (app::AkPositionArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Count, (app::AkPositionArray * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0188F610, void, Dispose, (app::AkPositionArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188F6D0, void, Finalize, (app::AkPositionArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188F7E0, void, Reset, (app::AkPositionArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188F7F0, void, Add, (app::AkPositionArray * this_ptr, app::Vector3 in__pos, app::Vector3 in__forward, app::Vector3 in__top))
} // namespace app::classes::AkPositionArray
