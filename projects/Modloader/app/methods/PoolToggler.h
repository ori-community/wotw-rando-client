#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PoolToggler.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::PoolToggler {
    IL2CPP_REGISTER_METHOD(0x00C60A90, app::String*, get_Path, (app::PoolToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C60B10, app::String*, get_Name, (app::PoolToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C60B90, app::String*, get_HelpText, (app::PoolToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::PoolToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C60C10, app::String__Array*, get_ToggleOptions, (app::PoolToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062A6B0, int32_t, get_CurrentToggleOptionId, (app::PoolToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C60D50, void, set_CurrentToggleOptionId, (app::PoolToggler * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::PoolToggler * this_ptr))
} // namespace app::classes::PoolToggler
