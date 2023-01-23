#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/ScenesManagerBehaviourUtility.h>
#include <Modloader/app/structs/ScenesManagerUpdateType__Enum.h>
#include <Modloader/app/structs/ScenesManagerContext.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/List_1_ScenesManagerBehaviourUtility_SceneMetaAndData_.h>
#include <Modloader/app/structs/NearbySceneData.h>

namespace app::classes::ScenesManagerBehaviourUtility {
    IL2CPP_REGISTER_METHOD(0x0105D090, app::Vector2, get_CurrentCameraTargetPositionExtrapolated, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105D0C0, app::Vector2, get_CurrentCameraTargetPositionExtrapolatedShort, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105D090, app::Vector2, get_PredictedTargetPosition, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989BF0, app::ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105D0F0, void, Initialize, (app::ScenesManagerBehaviourUtility * this_ptr, app::ScenesManagerContext* context))
    IL2CPP_REGISTER_METHOD(0x0105D2C0, void, Reset, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105D3F0, void, Update, (app::ScenesManagerBehaviourUtility * this_ptr, bool full_update))
    IL2CPP_REGISTER_METHOD(0x0105D910, void, UpdatePosition, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105DF40, void, FindScenesToLoadAtPosition, (app::ScenesManagerBehaviourUtility * this_ptr, app::Vector3 position, bool async, bool loading_zones, bool keep_preloaded))
    IL2CPP_REGISTER_METHOD(0x0105E360, void, FindScenesToLoadAtPositionExtrapolated, (app::ScenesManagerBehaviourUtility * this_ptr, app::List_1_System_Int32_* scene_list, bool async, bool loading_zones, bool keep_preloaded))
    IL2CPP_REGISTER_METHOD(0x0105E6E0, void, FindScenesToLoad, (app::ScenesManagerBehaviourUtility * this_ptr, app::Vector3 position, bool async, bool loading_zones, bool keep_preloaded))
    IL2CPP_REGISTER_METHOD(0x0105EA00, void, TryAddLoadOperation, (app::ScenesManagerBehaviourUtility * this_ptr, app::RuntimeSceneMetaData* scene))
    IL2CPP_REGISTER_METHOD(0x0105EB60, void, AddScenesToLoadByUtility, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105ED10, void, UpdateSceneUtilityInternal, (app::ScenesManagerBehaviourUtility * this_ptr, app::List_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* scene_list, bool has_nearby, int32_t* idx))
    IL2CPP_REGISTER_METHOD(0x0105EF50, void, ClearSceneInCurrentFrame, (app::ScenesManagerBehaviourUtility * this_ptr, app::List_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* scene_list))
    IL2CPP_REGISTER_METHOD(0x0105F030, void, ResetSceneUtilityNotInCurrentFrame, (app::ScenesManagerBehaviourUtility * this_ptr, app::List_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* scene_list))
    IL2CPP_REGISTER_METHOD(0x0105F140, void, UpdateActiveScenesUtilityList, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105F3F0, bool, UpdateNearbyScenesUtilityList, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105F800, void, UpdateSceneUtilityTimeSliced, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105F9D0, void, UpdateSceneUtilityFast, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0105FEF0, void, UpdateSceneUtilityOld, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01060430, void, UpdateSceneUtility, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01060530, int32_t, CalculateSceneUtility, (app::ScenesManagerBehaviourUtility * this_ptr, app::RuntimeSceneMetaData* meta, bool is_nearby, app::NearbySceneData near_scene_data))
    IL2CPP_REGISTER_METHOD(0x01060D20, void, LoadNearbyScenesBasedOnUtility, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010610E0, void, FindScenesToUnload, (app::ScenesManagerBehaviourUtility * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x010612A0, void, FindUneededScenesToUnload, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01061450, void, FindScenesToUnloadInternal, (app::ScenesManagerBehaviourUtility * this_ptr, bool instant, bool keep_loaded_using_utility))
    IL2CPP_REGISTER_METHOD(0x01062340, bool, ShouldKeepConnectedLoaded, (app::ScenesManagerBehaviourUtility * this_ptr, app::RuntimeSceneMetaData* meta_data, int32_t prevent_unloading_utility_value))
    IL2CPP_REGISTER_METHOD(0x010623A0, void, FindScenesToEnable, (app::ScenesManagerBehaviourUtility * this_ptr, bool limit_once, bool async))
    IL2CPP_REGISTER_METHOD(0x01063930, void, SetTargetPosition, (app::ScenesManagerBehaviourUtility * this_ptr, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x01063A40, void, ctor, (app::ScenesManagerBehaviourUtility * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01064800, void, cctor, ())
} // namespace app::classes::ScenesManagerBehaviourUtility
