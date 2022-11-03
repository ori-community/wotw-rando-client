#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LevelLoadingPriority {
    IL2CPP_REGISTER_METHOD(0x011328E0, app::String*, get_Path, (app::LevelLoadingPriority * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01132960, app::String*, get_Name, (app::LevelLoadingPriority * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011329E0, app::String*, get_HelpText, (app::LevelLoadingPriority * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::LevelLoadingPriority * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01132A60, app::String__Array*, get_ToggleOptions, (app::LevelLoadingPriority * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0048C250, int32_t, get_CurrentToggleOptionId, (app::LevelLoadingPriority * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01132C60, void, set_CurrentToggleOptionId, (app::LevelLoadingPriority * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LevelLoadingPriority * this_ptr))
} // namespace app::classes::LevelLoadingPriority
