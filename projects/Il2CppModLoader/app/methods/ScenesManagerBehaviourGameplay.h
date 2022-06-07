#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScenesManagerBehaviourGameplay {
    IL2CPP_REGISTER_METHOD(0x01056D40, app::Vector2, get_CurrentCameraTargetPositionExtrapolated, (app::ScenesManagerBehaviourGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01056D60, void, set_CurrentCameraTargetPositionExtrapolated, (app::ScenesManagerBehaviourGameplay * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01056D80, app::Vector2, get_CurrentCameraTargetPositionExtrapolatedShort, (app::ScenesManagerBehaviourGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01056DA0, void, set_CurrentCameraTargetPositionExtrapolatedShort, (app::ScenesManagerBehaviourGameplay * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01056D40, app::Vector2, get_PredictedTargetPosition, (app::ScenesManagerBehaviourGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (app::ScenesManagerBehaviourGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01056DC0, void, Update, (app::ScenesManagerBehaviourGameplay * this_ptr, bool full_update))
    IL2CPP_REGISTER_METHOD(0x01056EF0, void, UpdatePosition, (app::ScenesManagerBehaviourGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010574E0, void, FindScenesToLoad, (app::ScenesManagerBehaviourGameplay * this_ptr, app::Vector3 position, bool async, bool loading_zones, bool keep_preloaded))
    IL2CPP_REGISTER_METHOD(0x010578B0, void, FindScenesToUnload, (app::ScenesManagerBehaviourGameplay * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (app::ScenesManagerBehaviourGameplay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01057A60, void, FindScenesToUnloadInternal, (app::ScenesManagerBehaviourGameplay * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x010586F0, void, FindScenesToEnable, (app::ScenesManagerBehaviourGameplay * this_ptr, bool limit_once, bool async))
    IL2CPP_REGISTER_METHOD(0x01059520, void, SetTargetPosition, (app::ScenesManagerBehaviourGameplay * this_ptr, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x01059610, void, ctor, (app::ScenesManagerBehaviourGameplay * this_ptr))
}
