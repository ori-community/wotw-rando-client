#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UberPoolItem_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_UberPoolGroup_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonEffectRevertHandle.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Queue_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberPoolGroup.h>
#include <Modloader/app/structs/UberPoolItem.h>
#include <Modloader/app/structs/UberPoolManager.h>
#include <Modloader/app/structs/UberPoolSettings.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WeakPrefab.h>

namespace app::classes::UberPoolManager {
    IL2CPP_REGISTER_METHOD(0x00FD7890, void, DoLookUp, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FD7AF0, bool, get_IsAnyJobRunning, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FD7B70, void, ctor, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00875720, bool, get_DoPool, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FD90B0, void, set_DoPool, app::UberPoolManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00508FE0, bool, get_DoPoolAnalysis, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00508FF0, void, set_DoPoolAnalysis, app::UberPoolManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::List_1_UberPoolGroup_*, get_Groups, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FD90C0, bool, get_AllowLoadFromSceneStreaming, )
    IL2CPP_REGISTER_METHOD(0x00FD9160, void, set_AllowLoadFromSceneStreaming, bool value)
    IL2CPP_REGISTER_METHOD(0x00FD9820, void, Awake, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FD9C50, void, OnDestroy, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FD9F00, void, OnGameReset, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FD9F90, void, OnPreRestoreCheckpoint, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FDA020, app::GameObject*, Spawn_1, app::UberPoolManager* this_ptr, app::GameObject* o, bool* new_object)
    IL2CPP_REGISTER_METHOD(
        0x00FDA180,
        app::GameObject*,
        Spawn_2,
        app::UberPoolManager* this_ptr,
        app::GameObject* o,
        app::Vector3 position,
        app::Quaternion rotation,
        bool* new_object
    )
    IL2CPP_REGISTER_METHOD(0x00FDA220, void, Update, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FDA3E0, app::UberPoolItem*, TryGetInstanceFromPrewarmQueue_1, app::UberPoolManager* this_ptr, app::String* prefab_name)
    IL2CPP_REGISTER_METHOD(
        0x00FDA520,
        app::UberPoolItem*,
        TryGetInstanceFromPrewarmQueue_2,
        app::UberPoolManager* this_ptr,
        app::String* prefab_name,
        app::Queue_1_System_ValueTuple_2_* queue
    )
    IL2CPP_REGISTER_METHOD(
        0x00FDAAE0,
        app::UberPoolItem*,
        PrewarmInstanceFromPrewarmQueue,
        app::UberPoolManager* this_ptr,
        int32_t group_index,
        app::GameObject* instance,
        bool even_if_at_capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x00FDACD0,
        bool,
        UpdatePrewarmTransferredFromScene,
        app::UberPoolManager* this_ptr,
        app::Queue_1_System_ValueTuple_2_* prewarm_from_scene_queue
    )
    IL2CPP_REGISTER_METHOD(0x00FDAED0, bool, UpdateDestructionQueue, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FDB1E0, bool, UpdateTransferFromScene, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FDB730, void, EnqueueChildrenAndSelfForDestruction, app::UberPoolManager* this_ptr, app::Transform* obj)
    IL2CPP_REGISTER_METHOD(0x00FDB890, void, PruneAllGroups, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00FDB9F0,
        void,
        ModifyPendingPrewarmCount,
        app::UberPoolManager* this_ptr,
        app::String* prefab_name,
        int32_t pending_prewarm_count_delta
    )
    IL2CPP_REGISTER_METHOD(0x003FFA60, int32_t, get_TotalPendingPrewarmCount, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FDBBA0, int32_t, GetPendingPrewarmCount, app::UberPoolManager* this_ptr, app::String* prefab_name)
    IL2CPP_REGISTER_METHOD(
        0x00FDBCA0,
        void,
        LoadInstancesFromScene,
        app::UberPoolManager* this_ptr,
        app::String* scene_name,
        app::String* prefab_name,
        app::List_1_UnityEngine_GameObject_* instances,
        int32_t high_priority_prewarm_count
    )
    IL2CPP_REGISTER_METHOD(
        0x00FDC240,
        void,
        UnloadInstancesFromScene,
        app::UberPoolManager* this_ptr,
        app::String* scene_name,
        app::String* prefab_name,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x00FDC3A0, void, AddToDestructionQueue, app::UberPoolManager* this_ptr, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x00FDC500, void, PrewarmInstance, app::UberPoolManager* this_ptr, app::GameObject* prefab)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Dictionary_2_System_Int32_UberPoolItem_*, GetPrewarmEntries, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FDC660, app::UberPoolGroup*, GetGroup, app::UberPoolManager* this_ptr, app::GameObject* prefab)
    IL2CPP_REGISTER_METHOD(
        0x00FDC7D0,
        app::GameObject*,
        SpawnWithName,
        app::UberPoolManager* this_ptr,
        app::String* get_name,
        app::Vector3 position,
        app::Quaternion rotation,
        app::GameObject* original,
        bool* new_object
    )
    IL2CPP_REGISTER_METHOD(0x00FDCFD0, bool, IsPooled, app::UberPoolManager* this_ptr, app::String* name, bool* is_using_scene_pooling)
    IL2CPP_REGISTER_METHOD(0x00FDD2B0, app::WeakPrefab*, GetPrefabSettings, app::UberPoolManager* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x00FDD550, int32_t, GetGroupIndex, app::UberPoolManager* this_ptr, app::String* get_name)
    IL2CPP_REGISTER_METHOD(0x00FDD800, void, CreateAllGroups, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00FDD9C0,
        int32_t,
        CreateNewGroup,
        app::UberPoolManager* this_ptr,
        app::String* group_name,
        app::UberPoolSettings* setting,
        app::WeakPrefab* prefab
    )
    IL2CPP_REGISTER_METHOD(0x00FDDCE0, bool, Destroy, app::UberPoolManager* this_ptr, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x00FDE160, void, RemoveMoonEffectsRoot, app::UberPoolManager* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x00FDE3D0, void, ClearInvalidMoonEffects, app::UberPoolManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FDE700, void, Decease, app::UberPoolManager* this_ptr, app::GameObject* pool_object)
    IL2CPP_REGISTER_METHOD(0x00FDE820, bool, IsDestroyed_1, app::UberPoolManager* this_ptr, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x00FDE9F0, bool, IsDestroyed_2, app::UberPoolManager* this_ptr, app::Component_1* comp)
    IL2CPP_REGISTER_METHOD(0x00FDEA80, void, RemoveOnDestroyed, app::UberPoolManager* this_ptr, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x00FDEB70, void, AddOnDestroyed, app::UberPoolManager* this_ptr, app::GameObject* go, app::Action* set)
    IL2CPP_REGISTER_METHOD(0x00FDEE20, void, RunDestroyDelayed, app::UberPoolManager* this_ptr, float time, app::Action* run)
    IL2CPP_REGISTER_METHOD(0x00FDEF90, app::IEnumerator*, RunDelayed, app::UberPoolManager* this_ptr, float time, app::Action* run)
    IL2CPP_REGISTER_METHOD(
        0x00FDF0F0,
        void,
        RegisterForMoonEffectRevert,
        app::UberPoolManager* this_ptr,
        app::GameObject* instance,
        app::MoonEffectRevertHandle* revert_handle
    )
    IL2CPP_REGISTER_METHOD(0x00FDF310, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x00FDF390, bool, __ctor_b__35_0, app::UberPoolManager* this_ptr, app::UberPoolManager* manager)
    IL2CPP_REGISTER_METHOD(0x00FDF460, bool, __ctor_b__35_1, app::UberPoolManager* this_ptr, app::UberPoolManager* manager)
} // namespace app::classes::UberPoolManager
