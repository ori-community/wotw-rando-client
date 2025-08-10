#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementsUI.h>
#include <Modloader/app/structs/AsyncRenderCapture__Array.h>
#include <Modloader/app/structs/AudioListenerZone__Array.h>
#include <Modloader/app/structs/BlockableLaser.h>
#include <Modloader/app/structs/BossHealthbar2.h>
#include <Modloader/app/structs/Browser__Array.h>
#include <Modloader/app/structs/CameraManager.h>
#include <Modloader/app/structs/ChallengesUI.h>
#include <Modloader/app/structs/ColorVariation__Array.h>
#include <Modloader/app/structs/DamageReceiver__Array.h>
#include <Modloader/app/structs/Dropdown_DropdownItem.h>
#include <Modloader/app/structs/EnemyEntity__Array.h>
#include <Modloader/app/structs/EscapeRaceHandler.h>
#include <Modloader/app/structs/FPSCursorRenderer.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GhostServerRecorder.h>
#include <Modloader/app/structs/HideFlags__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/LeaderboardsController.h>
#include <Modloader/app/structs/MainThreadDispatcherPlaymode.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MonoManager.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object_1__Array.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PlaymodeUpdateDelegate.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/ReEngageUI.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Rope.h>
#include <Modloader/app/structs/RunActionCondition__Array.h>
#include <Modloader/app/structs/SceneRoot__Array.h>
#include <Modloader/app/structs/SeinPlaceholder.h>
#include <Modloader/app/structs/SkinnedMeshLod__Array.h>
#include <Modloader/app/structs/SoundHost__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextRenderer_1.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TurbulenceManager.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberPoolGroupWarmer__Array.h>
#include <Modloader/app/structs/UberPoolPerfTestSettings__Array.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VisualLog.h>
#include <Modloader/app/structs/WwiseBootstrap.h>

namespace app::classes::UnityEngine::Object {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Object_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02540E60, int32_t, GetInstanceID, app::Object_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02540FC0, int32_t, GetHashCode, app::Object_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02540FD0, bool, Equals, app::Object_1* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x02541140, bool, op_Implicit, app::Object_1* exists)
    IL2CPP_REGISTER_METHOD(0x025411F0, bool, CompareBaseObjects, app::Object_1* lhs, app::Object_1* rhs)
    IL2CPP_REGISTER_METHOD(0x025412F0, void, EnsureRunningOnMainThread, app::Object_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025413F0, bool, IsNativeObjectAlive, app::Object_1* o)
    IL2CPP_REGISTER_METHOD(0x01F2AB40, void*, GetCachedPtr, app::Object_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02541480, app::String*, get_name, app::Object_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02541550, void, set_name, app::Object_1* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02541640, app::Object_1*, Instantiate_1, app::Object_1* original, app::Vector3 position, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(
        0x025418D0,
        app::Object_1*,
        Instantiate_2,
        app::Object_1* original,
        app::Vector3 position,
        app::Quaternion rotation,
        app::Transform* parent
    )
    IL2CPP_REGISTER_METHOD(0x02541B50, app::Object_1*, Instantiate_3, app::Object_1* original)
    IL2CPP_REGISTER_METHOD(0x02541C80, app::Object_1*, Instantiate_4, app::Object_1* original, app::Transform* parent)
    IL2CPP_REGISTER_METHOD(0x02541D30, app::Object_1*, Instantiate_5, app::Object_1* original, app::Transform* parent, bool instantiate_in_world_space)
    IL2CPP_REGISTER_METHOD(0x02541FF0, void, Destroy_1, app::Object_1* obj, float t)
    IL2CPP_REGISTER_METHOD(0x02542050, void, Destroy_2, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x02542130, void, DestroyImmediate_1, app::Object_1* obj, bool allow_destroying_assets)
    IL2CPP_REGISTER_METHOD(0x02542190, void, DestroyImmediate_2, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x02542270, void, BatchDestroy, app::Int32__Array* instance_i_ds)
    IL2CPP_REGISTER_METHOD(0x025422C0, app::Object_1__Array*, FindObjectsOfType_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02542310, void, DontDestroyOnLoad, app::Object_1* target)
    IL2CPP_REGISTER_METHOD(0x02542360, app::HideFlags__Enum, get_hideFlags, app::Object_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025423B0, void, set_hideFlags, app::Object_1* this_ptr, app::HideFlags__Enum value)
    IL2CPP_REGISTER_METHOD(0x02542410, void, DestroyObject_1, app::Object_1* obj, float t)
    IL2CPP_REGISTER_METHOD(0x025424F0, void, DestroyObject_2, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x025425D0, app::Object_1__Array*, FindSceneObjectsOfType, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02542620, app::Object_1__Array*, FindObjectsOfTypeIncludingAssets, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02542670, app::Object_1__Array*, FindObjectsOfTypeAll, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x025426C0, void, CheckNullArgument, app::Object* arg, app::String* message)
    IL2CPP_REGISTER_METHOD(0x02542780, app::Object_1*, FindObjectOfType_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02542890, app::String*, ToString_1, app::Object_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02542960, bool, op_Equality, app::Object_1* x, app::Object_1* y)
    IL2CPP_REGISTER_METHOD(0x02542A10, bool, op_Inequality, app::Object_1* x, app::Object_1* y)
    IL2CPP_REGISTER_METHOD(0x02542AC0, int32_t, GetOffsetOfInstanceIDInCPlusPlusObject, )
    IL2CPP_REGISTER_METHOD(0x02542B10, bool, CurrentThreadIsMainThread, )
    IL2CPP_REGISTER_METHOD(0x02542B60, app::Object_1*, Internal_CloneSingle, app::Object_1* data)
    IL2CPP_REGISTER_METHOD(0x02542BB0, app::Object_1*, Internal_CloneSingleWithParent, app::Object_1* data, app::Transform* parent, bool world_position_stays)
    IL2CPP_REGISTER_METHOD(0x02542C30, app::Object_1*, Internal_InstantiateSingle, app::Object_1* data, app::Vector3 pos, app::Quaternion rot)
    IL2CPP_REGISTER_METHOD(
        0x02542D20,
        app::Object_1*,
        Internal_InstantiateSingleWithParent,
        app::Object_1* data,
        app::Transform* parent,
        app::Vector3 pos,
        app::Quaternion rot
    )
    IL2CPP_REGISTER_METHOD(0x02542E20, app::String*, ToString_2, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x02542E70, app::String*, GetName, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x02542EC0, void, SetName, app::Object_1* obj, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02542F20, bool, DoesObjectWithInstanceIDExist, int32_t instance_i_d)
    IL2CPP_REGISTER_METHOD(0x02542F70, app::Object_1*, FindObjectFromInstanceID, int32_t instance_i_d)
    IL2CPP_REGISTER_METHOD(0x02542FC0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02543040, app::Object_1*, Internal_InstantiateSingle_Injected, app::Object_1* data, app::Vector3* pos, app::Quaternion* rot)
    IL2CPP_REGISTER_METHOD(
        0x025430B0,
        app::Object_1*,
        Internal_InstantiateSingleWithParent_Injected,
        app::Object_1* data,
        app::Transform* parent,
        app::Vector3* pos,
        app::Quaternion* rot
    )
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Object*, Instantiate_6, app::Object* original)
    IL2CPP_REGISTER_METHOD(0x0157D490, app::Object*, Instantiate_7, app::Object* original, app::Vector3 position, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(
        0x0157D5C0,
        app::Object*,
        Instantiate_8,
        app::Object* original,
        app::Vector3 position,
        app::Quaternion rotation,
        app::Transform* parent
    )
    IL2CPP_REGISTER_METHOD(0x0157D2C0, app::Object*, Instantiate_9, app::Object* original, app::Transform* parent)
    IL2CPP_REGISTER_METHOD(0x0157D380, app::Object*, Instantiate_10, app::Object* original, app::Transform* parent, bool world_position_stays)
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::Object__Array*, FindObjectsOfType_2, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::Object*, FindObjectOfType_2, )
    IL2CPP_REGISTER_METHOD(0x0157D490, app::GameObject*, Instantiate_11, app::GameObject* original, app::Vector3 position, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x0157D130, app::GameObject*, Instantiate_12, app::GameObject* original)
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Dropdown_DropdownItem*, Instantiate_13, app::Dropdown_DropdownItem* original)
    IL2CPP_REGISTER_METHOD(0x0157D490, app::Transform*, Instantiate_14, app::Transform* original, app::Vector3 position, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Material*, Instantiate_15, app::Material* original)
    IL2CPP_REGISTER_METHOD(0x0157D000, app::MainThreadDispatcherPlaymode*, FindObjectOfType_3, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::PlaymodeUpdateDelegate*, FindObjectOfType_4, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::WwiseBootstrap*, FindObjectOfType_5, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::SoundHost__Array*, FindObjectsOfType_3, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::AudioListenerZone__Array*, FindObjectsOfType_4, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::AchievementsUI*, FindObjectOfType_6, )
    IL2CPP_REGISTER_METHOD(0x0157D2C0, app::GameObject*, Instantiate_16, app::GameObject* original, app::Transform* parent)
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::SkinnedMeshLod__Array*, FindObjectsOfType_5, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::BossHealthbar2*, FindObjectOfType_7, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::CameraManager*, FindObjectOfType_8, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::ChallengesUI*, FindObjectOfType_9, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::DamageReceiver__Array*, FindObjectsOfType_6, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::EnemyEntity__Array*, FindObjectsOfType_7, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::EscapeRaceHandler*, FindObjectOfType_10, )
    IL2CPP_REGISTER_METHOD(
        0x0157D5C0,
        app::BlockableLaser*,
        Instantiate_17,
        app::BlockableLaser* original,
        app::Vector3 position,
        app::Quaternion rotation,
        app::Transform* parent
    )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::LeaderboardsController*, FindObjectOfType_11, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::SceneRoot__Array*, FindObjectsOfType_8, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::ColorVariation__Array*, FindObjectsOfType_9, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::SeinPlaceholder*, FindObjectOfType_12, )
    IL2CPP_REGISTER_METHOD(0x0157D130, app::LayeredRenderSettings*, Instantiate_18, app::LayeredRenderSettings* original)
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Transform*, Instantiate_19, app::Transform* original)
    IL2CPP_REGISTER_METHOD(0x0157D130, app::TextRenderer_1*, Instantiate_20, app::TextRenderer_1* original)
    IL2CPP_REGISTER_METHOD(0x0157D130, app::MoonRenderPipelineAsset*, Instantiate_21, app::MoonRenderPipelineAsset* original)
    IL2CPP_REGISTER_METHOD(0x0157D000, app::ReEngageUI*, FindObjectOfType_13, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::AsyncRenderCapture__Array*, FindObjectsOfType_10, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::GhostServerRecorder*, FindObjectOfType_14, )
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Rigidbody*, Instantiate_22, app::Rigidbody* original)
    IL2CPP_REGISTER_METHOD(0x0157D5C0, app::Rope*, Instantiate_23, app::Rope* original, app::Vector3 position, app::Quaternion rotation, app::Transform* parent)
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::RunActionCondition__Array*, FindObjectsOfType_11, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::TurbulenceManager*, FindObjectOfType_15, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::UberPoolGroupWarmer__Array*, FindObjectsOfType_12, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::UberPoolPerfTestSettings__Array*, FindObjectsOfType_13, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::VisualLog*, FindObjectOfType_16, )
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::Browser__Array*, FindObjectsOfType_14, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::FPSCursorRenderer*, FindObjectOfType_17, )
    IL2CPP_REGISTER_METHOD(0x0157D000, app::MonoManager*, FindObjectOfType_18, )
    IL2CPP_REGISTER_METHOD(
        0x0157D5C0,
        app::GameObject*,
        Instantiate_24,
        app::GameObject* original,
        app::Vector3 position,
        app::Quaternion rotation,
        app::Transform* parent
    )
    inline bool operator==(app::Object_1& x, app::Object_1& y) { return op_Equality(&x, &y); }
    inline bool operator!=(app::Object_1& x, app::Object_1& y) { return op_Inequality(&x, &y); }
} // namespace app::classes::UnityEngine::Object
