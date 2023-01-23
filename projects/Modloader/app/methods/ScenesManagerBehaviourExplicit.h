#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/ScenesManagerBehaviourExplicit.h>
#include <Modloader/app/structs/ScenesManagerUpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ScenesManagerBehaviourExplicit {
    IL2CPP_REGISTER_METHOD(0x01052D80, app::Vector2, get_PredictedTargetPosition, (app::ScenesManagerBehaviourExplicit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (app::ScenesManagerBehaviourExplicit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01055550, void, Update, (app::ScenesManagerBehaviourExplicit * this_ptr, bool full_update))
    IL2CPP_REGISTER_METHOD(0x01055740, void, FindScenesToLoad, (app::ScenesManagerBehaviourExplicit * this_ptr, app::Vector3 position, bool async, bool loading_zones, bool keep_preloaded))
    IL2CPP_REGISTER_METHOD(0x01055B10, void, FindScenesToUnload, (app::ScenesManagerBehaviourExplicit * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (app::ScenesManagerBehaviourExplicit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01055BE0, void, FindScenesToUnloadInternal, (app::ScenesManagerBehaviourExplicit * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x010560A0, void, FindScenesToEnable, (app::ScenesManagerBehaviourExplicit * this_ptr, bool limit_once, bool async))
    IL2CPP_REGISTER_METHOD(0x01056BB0, void, ctor, (app::ScenesManagerBehaviourExplicit * this_ptr))
} // namespace app::classes::ScenesManagerBehaviourExplicit
