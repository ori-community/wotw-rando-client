#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ScenesManagerBehaviourCinematic {
    IL2CPP_REGISTER_METHOD(0x01052D80, app::Vector2, get_PredictedTargetPosition, (app::ScenesManagerBehaviourCinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (app::ScenesManagerBehaviourCinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01053AB0, void, Update, (app::ScenesManagerBehaviourCinematic * this_ptr, bool full_update))
    IL2CPP_REGISTER_METHOD(0x01053C10, void, FindScenesToLoad, (app::ScenesManagerBehaviourCinematic * this_ptr, app::Vector3 position, bool async, bool loading_zones, bool keep_preloaded))
    IL2CPP_REGISTER_METHOD(0x01053FE0, void, FindScenesToUnload, (app::ScenesManagerBehaviourCinematic * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (app::ScenesManagerBehaviourCinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01054180, void, FindScenesToUnloadInternal, (app::ScenesManagerBehaviourCinematic * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x010548C0, void, FindScenesToEnable, (app::ScenesManagerBehaviourCinematic * this_ptr, bool limit_once, bool async))
    IL2CPP_REGISTER_METHOD(0x010553C0, void, ctor, (app::ScenesManagerBehaviourCinematic * this_ptr))
} // namespace app::classes::ScenesManagerBehaviourCinematic
