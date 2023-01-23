#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CollectablePlaceholder.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CollectableCheckpointSettings.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::CollectablePlaceholder {
    IL2CPP_REGISTER_METHOD(0x012CBAF0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsSuspended, (app::CollectablePlaceholder * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005065F0, app::SuspendableMask__Enum, get_Mask, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CBBC0, void, set_Mask, (app::CollectablePlaceholder * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x012CBC80, bool, get_Collected, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CBCC0, void, set_Collected, (app::CollectablePlaceholder * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x012CBD90, bool, get_IsCurrentlyRevealed, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CBDD0, bool, get_ShouldUseLegacySerialization, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CBE70, void, Awake, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CC140, void, OnEnable, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CC1F0, void, OnDisable, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CC2A0, void, OnDestroy, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CC3B0, void, OnCollect, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04745F48, CollectablePlaceholder_OnCollect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012CC530, bool, CanCreateCheckpoint, ())
    IL2CPP_REGISTER_METHOD(0x012CC5C0, void, SubscribeToCharacterLandEvent, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CC790, void, UnsubscribeFromCharacterLandEvent, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CC990, void, FixedUpdate, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CCF60, void, DespawnInstance, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CD080, void, Instantiate, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CD590, void, OnInstantiate, (app::CollectablePlaceholder * this_ptr, app::GameObject* instance))
    IL2CPP_REGISTER_METHOD(0x012CD7B0, void, Serialize, (app::CollectablePlaceholder * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x012CD810, void, CreateCheckpointWithOffset, (app::CollectablePlaceholder * this_ptr, app::CollectableCheckpointSettings* settings))
    IL2CPP_REGISTER_METHOD(0x012CDA90, void, OnCharacterLand, (app::CollectablePlaceholder * this_ptr, app::Vector3 normal, app::Collider* collider))
    IL2CPP_REGISTER_METHODINFO(0x0470B810, CollectablePlaceholder_OnCharacterLand__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CDB70, void, Apply, (app::CollectablePlaceholder * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00BFB3D0, app::IUberState__Array*, get_AffectingUberStates, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CDD20, void, ctor, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CDFE0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x012CE130, void, _Instantiate_b__41_0, (app::CollectablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779070, CollectablePlaceholder__Instantiate_b__41_0__MethodInfo)
} // namespace app::classes::CollectablePlaceholder
