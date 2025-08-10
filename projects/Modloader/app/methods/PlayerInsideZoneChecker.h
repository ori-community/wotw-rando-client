#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>

namespace app::classes::PlayerInsideZoneChecker {
    IL2CPP_REGISTER_METHOD(0x014270D0, bool, get_IsInside, app::PlayerInsideZoneChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01427340, bool, Validate, app::PlayerInsideZoneChecker* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00735B10, void, ctor, app::PlayerInsideZoneChecker* this_ptr)
} // namespace app::classes::PlayerInsideZoneChecker
