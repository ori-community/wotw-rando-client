#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISerializedUberState.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/IUberStateApplier.h>
#include <Modloader/app/structs/IUberStateApplierWithCallbacks.h>
#include <Modloader/app/structs/List_1_Moon_IUberStateApplier_.h>
#include <Modloader/app/structs/List_1_Moon_IUberState_.h>
#include <Modloader/app/structs/SceneUberStateGroup.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/UberStateController.h>
#include <Modloader/app/structs/UberStateValueStore.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::UberStateController {
    IL2CPP_REGISTER_METHOD(0x01B69690, app::List_1_Moon_IUberStateApplier_*, get_AppliersEditorCache, )
    IL2CPP_REGISTER_METHOD(0x01B699A0, void, InvalidateAppliersCache, )
    IL2CPP_REGISTER_METHOD(0x01B69AB0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x01B69CB0, app::UberStateController*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x01B69EB0, void, Register_1, app::IUberStateApplierWithCallbacks* applier)
    IL2CPP_REGISTER_METHOD(0x01B69F80, void, Unregister_1, app::IUberStateApplierWithCallbacks* applier)
    IL2CPP_REGISTER_METHOD(0x01B6A050, void, Register_2, app::IUberStateApplier* applier)
    IL2CPP_REGISTER_METHOD(0x01B6A1E0, void, Unregister_2, app::IUberStateApplier* applier)
    IL2CPP_REGISTER_METHOD(0x01B6A3B0, app::UberStateValueStore*, get_CurrentStateValueStore, )
    IL2CPP_REGISTER_METHOD(0x01B6A590, bool, get_HavePendingAppliers, app::UberStateController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6A620, void, Initialize, app::UberStateController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6A970, void, OnUpdate, app::UberStateController* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x01B6AA10, void, LookForExternalModifications, app::UberStateController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6ABB0, void, NotifyPresaveObservers, app::UberStateValueStore* value_store)
    IL2CPP_REGISTER_METHOD(0x01B6AE60, void, SetState, app::UberStateValueStore* uber_state_value_store)
    IL2CPP_REGISTER_METHOD(0x01B6AF30, void, NotifySerializationChanged, app::ISerializedUberState* uber_state)
    IL2CPP_REGISTER_METHOD(0x01B6B010, app::SceneUberStateGroup*, GetSceneGroup, app::String* scene)
    IL2CPP_REGISTER_METHOD(0x01B6B390, void, ApplyPendingChanges, )
    IL2CPP_REGISTER_METHOD(0x01B6B440, void, ApplyChanges, app::UberStateController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6B6F0, void, RemoveApplier, app::UberStateController* this_ptr, app::IUberStateApplier* applier)
    IL2CPP_REGISTER_METHOD(0x01B6B850, bool, IsWaitingToApplyApplier_1, app::UberStateController* this_ptr, app::IUberStateApplier* applier, int32_t* index)
    IL2CPP_REGISTER_METHOD(0x01B6B930, bool, IsWaitingToApplyApplier_2, app::UberStateController* this_ptr, app::IUberStateApplier* applier)
    IL2CPP_REGISTER_METHOD(
        0x01B6BB30,
        void,
        SetWaitingApplierContext,
        app::UberStateController* this_ptr,
        int32_t index,
        app::UberStateApplyContext__Enum context
    )
    IL2CPP_REGISTER_METHOD(0x01B6BC30, void, Apply_1, app::List_1_Moon_IUberState_* descriptors, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x01B6BD60, void, Apply_2, app::IUberState* descriptor, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x01B6C010, bool, ApplierIsAffectedByUberState, app::IUberStateApplier* applier, app::IUberState* descriptor)
    IL2CPP_REGISTER_METHOD(0x01B6C160, void, ApplyAll, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x01B6C3D0, void, OnPostRestoreCheckpoint, )
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::UberStateController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateEditorAppliersCache, )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPlaying, )
    IL2CPP_REGISTER_METHOD(0x01B6C550, void, ctor, app::UberStateController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B6C850, void, cctor, )
} // namespace app::classes::Moon::UberStateController
