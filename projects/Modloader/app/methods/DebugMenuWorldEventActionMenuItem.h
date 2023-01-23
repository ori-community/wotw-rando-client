#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DebugMenuWorldEventActionMenuItem.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WorldEvents.h>

namespace app::classes::DebugMenuWorldEventActionMenuItem {
    IL2CPP_REGISTER_METHOD(0x00DF83C0, void, ctor, (app::DebugMenuWorldEventActionMenuItem * this_ptr, app::String* path, app::WorldEvents* world_event))
    IL2CPP_REGISTER_METHOD(0x00DF8530, bool, UpdateWorldEventValue, (app::DebugMenuWorldEventActionMenuItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728C40, DebugMenuWorldEventActionMenuItem_UpdateWorldEventValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DF86E0, void, UpdateText, (app::DebugMenuWorldEventActionMenuItem * this_ptr))
} // namespace app::classes::DebugMenuWorldEventActionMenuItem
