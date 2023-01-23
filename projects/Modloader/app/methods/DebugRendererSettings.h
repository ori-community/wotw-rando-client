#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DebugRendererSettings.h>
#include <Modloader/app/structs/RenderingType__Enum.h>
#include <Modloader/app/structs/List_1_SceneManagerScene_.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DebugRendererSettings_ColliderType__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/InvisibleCheckpoint.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/VerletStructure.h>
#include <Modloader/app/structs/CheckpointRestrictZone.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/Camera.h>

namespace app::classes::DebugRendererSettings {
    IL2CPP_REGISTER_METHOD(0x00B73C20, app::DebugRendererSettings*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00B73CC0, void, OnEnable, (app::DebugRendererSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B73F40, void, OnDisable, (app::DebugRendererSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B74150, void, OnGUI, (app::DebugRendererSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B74440, void, RenderDebug, (app::DebugRendererSettings * this_ptr, app::RenderingType__Enum rendering_type))
    IL2CPP_REGISTER_METHOD(0x00B75320, void, RenderDebugGUI, (app::DebugRendererSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B755D0, void, UpdateColliders, (app::DebugRendererSettings * this_ptr, app::List_1_SceneManagerScene_* scenes))
    IL2CPP_REGISTER_METHOD(0x00B75B90, void, UpdateInvisibleCheckpoints, (app::DebugRendererSettings * this_ptr, app::List_1_SceneManagerScene_* scenes))
    IL2CPP_REGISTER_METHOD(0x00B75DC0, void, UpdateRigidbodies, (app::DebugRendererSettings * this_ptr, app::List_1_SceneManagerScene_* scenes))
    IL2CPP_REGISTER_METHOD(0x00B76560, void, UpdateEarlyZObjects, (app::DebugRendererSettings * this_ptr, app::List_1_SceneManagerScene_* scenes))
    IL2CPP_REGISTER_METHOD(0x00B76910, void, UpdateCheckpointRestrictedZones, (app::DebugRendererSettings * this_ptr, app::List_1_SceneManagerScene_* scenes))
    IL2CPP_REGISTER_METHOD(0x00B76B20, void, UpdateVerletStructures, (app::DebugRendererSettings * this_ptr, app::List_1_SceneManagerScene_* scenes))
    IL2CPP_REGISTER_METHOD(0x00B76D20, void, OnSceneRegisteredHandler, (app::DebugRendererSettings * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701460, DebugRendererSettings_OnSceneRegisteredHandler__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B76D30, app::Transform*, FindSolidsRootGameObject, (app::DebugRendererSettings * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x00B76FE0, app::Transform*, FindSeinCharacterRootGameObject, (app::DebugRendererSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B77140, app::Transform*, FindOriRootGameObject, (app::DebugRendererSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B77270, void, RenderCollider_1, (app::DebugRendererSettings * this_ptr, app::Collider* collider, app::RenderingType__Enum render_type, app::DebugRendererSettings_ColliderType__Enum object_type))
    IL2CPP_REGISTER_METHOD(0x00B774C0, void, RenderCollider_2, (app::DebugRendererSettings * this_ptr, app::Collider* collider, app::Color color, app::RenderingType__Enum render_type))
    IL2CPP_REGISTER_METHOD(0x00B778F0, void, RenderInvisibleCheckpoint, (app::DebugRendererSettings * this_ptr, app::InvisibleCheckpoint* invisible_checkpoint))
    IL2CPP_REGISTER_METHOD(0x00B77B80, void, RenderRigidbody, (app::DebugRendererSettings * this_ptr, app::Rigidbody* rigidbody, bool with_collider))
    IL2CPP_REGISTER_METHOD(0x00B77E90, void, RenderSceneBounds, (app::DebugRendererSettings * this_ptr, app::SceneMetaData* meta_data))
    IL2CPP_REGISTER_METHOD(0x00B780D0, void, RenderScenePaddingBoundaries, (app::DebugRendererSettings * this_ptr, app::SceneMetaData* meta_data))
    IL2CPP_REGISTER_METHOD(0x00B782A0, void, RenderSceneLoadingBoundaries, (app::DebugRendererSettings * this_ptr, app::SceneMetaData* meta_data))
    IL2CPP_REGISTER_METHOD(0x00B78420, void, RenderMeshFilter, (app::DebugRendererSettings * this_ptr, app::MeshFilter* mesh_filter))
    IL2CPP_REGISTER_METHOD(0x00B786B0, void, RenderVerletStructure, (app::DebugRendererSettings * this_ptr, app::VerletStructure* verlet_structure))
    IL2CPP_REGISTER_METHOD(0x00B78C50, void, RenderCheckpointRestrictZone, (app::DebugRendererSettings * this_ptr, app::CheckpointRestrictZone* zone, app::RenderingType__Enum render_type))
    IL2CPP_REGISTER_METHOD(0x00B79380, app::GUIStyle*, get_LabelStyle, (app::DebugRendererSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B79520, void, RenderCheckpointRestrictZoneGUI, (app::DebugRendererSettings * this_ptr, app::CheckpointRestrictZone* zone, app::Camera* camera))
    IL2CPP_REGISTER_METHOD(0x00B79A90, bool, SceneBoundsGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x04749F98, DebugRendererSettings_SceneBoundsGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B79BE0, void, SceneBoundsSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x0472EB08, DebugRendererSettings_SceneBoundsSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B79D30, bool, ScenePaddingBoundariesGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x047157B8, DebugRendererSettings_ScenePaddingBoundariesGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B79E80, void, ScenePaddingBoundariesSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x04769500, DebugRendererSettings_ScenePaddingBoundariesSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B79FD0, bool, SceneLoadingBoundariesGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x0476F910, DebugRendererSettings_SceneLoadingBoundariesGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7A120, void, SceneLoadingBoundariesSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x04786960, DebugRendererSettings_SceneLoadingBoundariesSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7A270, bool, CollidersGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x0475D0B8, DebugRendererSettings_CollidersGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7A3C0, void, CollidersSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x0478CB08, DebugRendererSettings_CollidersSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7A510, bool, SolidsCollidersGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x0477B700, DebugRendererSettings_SolidsCollidersGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7A660, void, SolidsCollidersSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x04785F20, DebugRendererSettings_SolidsCollidersSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7A7B0, bool, SeinCharacterCollidersGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x0477CB40, DebugRendererSettings_SeinCharacterCollidersGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7A900, void, SeinCharacterCollidersSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x0474AEC0, DebugRendererSettings_SeinCharacterCollidersSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7AA50, bool, TriggerCollidersGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x0477A980, DebugRendererSettings_TriggerCollidersGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7ABA0, void, TriggerCollidersSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x04737348, DebugRendererSettings_TriggerCollidersSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7ACF0, bool, DisabledCollidersGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x0473A190, DebugRendererSettings_DisabledCollidersGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7AE40, void, DisabledCollidersSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x04781C30, DebugRendererSettings_DisabledCollidersSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7AF90, bool, InvisibleCheckpointsGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x04737E00, DebugRendererSettings_InvisibleCheckpointsGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7B0E0, void, InvisibleCheckpointsSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x04717D20, DebugRendererSettings_InvisibleCheckpointsSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7B230, bool, RigidbodiesGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x0478B770, DebugRendererSettings_RigidbodiesGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7B380, void, RigidbodiesSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x04747A98, DebugRendererSettings_RigidbodiesSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7B4D0, bool, LegendGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x0473F5A0, DebugRendererSettings_LegendGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7B620, void, LegendSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x0476A288, DebugRendererSettings_LegendSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7B770, bool, EarlyZObjectsGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x047934D0, DebugRendererSettings_EarlyZObjectsGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7B8C0, void, EarlyZObjectsSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x0478E608, DebugRendererSettings_EarlyZObjectsSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7BA10, bool, VerletGetter, ())
    IL2CPP_REGISTER_METHODINFO(0x0475A878, DebugRendererSettings_VerletGetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7BB60, void, VerletSetter, (bool new_state))
    IL2CPP_REGISTER_METHODINFO(0x04763548, DebugRendererSettings_VerletSetter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7BCB0, void, ctor, (app::DebugRendererSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::DebugRendererSettings
