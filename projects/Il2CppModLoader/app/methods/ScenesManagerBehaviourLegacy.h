#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScenesManagerBehaviourLegacy {
    IL2CPP_REGISTER_METHOD(0x01056D40, app::Vector2, get_CurrentCameraTargetPositionExtrapolated, (app::ScenesManagerBehaviourLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01056D60, void, set_CurrentCameraTargetPositionExtrapolated, (app::ScenesManagerBehaviourLegacy * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01056D80, app::Vector2, get_CurrentCameraTargetPositionExtrapolatedShort, (app::ScenesManagerBehaviourLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01056DA0, void, set_CurrentCameraTargetPositionExtrapolatedShort, (app::ScenesManagerBehaviourLegacy * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01056D40, app::Vector2, get_PredictedTargetPosition, (app::ScenesManagerBehaviourLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (app::ScenesManagerBehaviourLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010598A0, void, Update, (app::ScenesManagerBehaviourLegacy * this_ptr, bool full_update))
    IL2CPP_REGISTER_METHOD(0x010599D0, void, UpdatePosition, (app::ScenesManagerBehaviourLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01059FC0, void, FindScenesToLoad, (app::ScenesManagerBehaviourLegacy * this_ptr, app::Vector3 position, bool async, bool loading_zones, bool keep_preloaded))
    IL2CPP_REGISTER_METHOD(0x0105A390, void, FindScenesToUnload, (app::ScenesManagerBehaviourLegacy * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (app::ScenesManagerBehaviourLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105A680, void, FindScenesToUnloadInternal, (app::ScenesManagerBehaviourLegacy * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x0105B7D0, void, FindScenesToEnable, (app::ScenesManagerBehaviourLegacy * this_ptr, bool limit_once, bool async))
    IL2CPP_REGISTER_METHOD(0x0105CAC0, void, SetTargetPosition, (app::ScenesManagerBehaviourLegacy * this_ptr, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x0105CBB0, void, ctor, (app::ScenesManagerBehaviourLegacy * this_ptr))
}
