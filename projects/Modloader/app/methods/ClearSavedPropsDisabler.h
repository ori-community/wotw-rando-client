#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClearSavedPropsDisabler.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ClearSavedPropsDisabler {
    IL2CPP_REGISTER_METHOD(0x012ACB70, void, OnEnable, app::ClearSavedPropsDisabler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012ACCF0, void, OnDisable, app::ClearSavedPropsDisabler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012ACD50, bool, ShouldExecuteBasedOnCommandlineArgument, app::String* argument, bool default_value)
    IL2CPP_REGISTER_METHOD(0x012ACE30, app::String*, ParseArgument, app::String* flag)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ClearSavedPropsDisabler* this_ptr)
} // namespace app::classes::ClearSavedPropsDisabler
