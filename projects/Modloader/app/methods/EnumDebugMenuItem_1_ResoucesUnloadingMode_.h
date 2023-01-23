#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnumDebugMenuItem_1_ResoucesUnloadingMode_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Func_1_ResoucesUnloadingMode_.h>
#include <Modloader/app/structs/Action_1_ResoucesUnloadingMode_.h>

namespace app::classes::EnumDebugMenuItem_1_ResoucesUnloadingMode_ {
    IL2CPP_REGISTER_METHOD(0x019E1D40, void, ctor, (app::EnumDebugMenuItem_1_ResoucesUnloadingMode_ * this_ptr, app::String* path, app::String* text, app::Func_1_ResoucesUnloadingMode_* getter, app::Action_1_ResoucesUnloadingMode_* setter, app::String* help, bool should_show_only_selected))
    IL2CPP_REGISTER_METHODINFO(0x047921F8, EnumDebugMenuItem_1_ResoucesUnloadingMode___ctor__MethodInfo)
} // namespace app::classes::EnumDebugMenuItem_1_ResoucesUnloadingMode_
