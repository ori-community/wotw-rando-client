#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PoolAnalyzeToggler {
    IL2CPP_REGISTER_METHOD(0x00C5F3B0, app::String*, get_Path, (app::PoolAnalyzeToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5F430, app::String*, get_Name, (app::PoolAnalyzeToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5F4B0, app::String*, get_HelpText, (app::PoolAnalyzeToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::PoolAnalyzeToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5F530, app::String__Array*, get_ToggleOptions, (app::PoolAnalyzeToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062A6B0, int32_t, get_CurrentToggleOptionId, (app::PoolAnalyzeToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5F670, void, set_CurrentToggleOptionId, (app::PoolAnalyzeToggler * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PoolAnalyzeToggler * this_ptr))
} // namespace app::classes::PoolAnalyzeToggler
