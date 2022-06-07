#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberPoolGroup {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::UberPoolSettings *, get_Settings, (app::UberPoolGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD2C00, int32_t, get_CurrentObjectCount, (app::UberPoolGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_PeakObjectCount, (app::UberPoolGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD2C90, bool, get_ReachedCapacity, (app::UberPoolGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD2D20, void, Awake, (app::UberPoolGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD2E30, void, Init, (app::UberPoolGroup * this_ptr, app::String * pool_name, app::UberPoolSettings * settings, app::WeakPrefab * prefab))
    IL2CPP_REGISTER_METHOD(0x00FD2F80, void, PrewarmInstance, (app::UberPoolGroup * this_ptr, app::GameObject * prefab, app::Dictionary_2_System_Int32_UberPoolItem_ * entries))
    IL2CPP_REGISTER_METHOD(0x00FD30C0, app::UberPoolItem *, PrewarmInstanceFromScene, (app::UberPoolGroup * this_ptr, app::GameObject * instance, app::Dictionary_2_System_Int32_UberPoolItem_ * entries))
    IL2CPP_REGISTER_METHOD(0x00FD3150, app::UberPoolItem *, PrewarmExistingInstance, (app::UberPoolGroup * this_ptr, app::GameObject * instance, app::Dictionary_2_System_Int32_UberPoolItem_ * entries))
    IL2CPP_REGISTER_METHOD(0x00FD3290, app::UberPoolItem *, RequestObject, (app::UberPoolGroup * this_ptr, app::GameObject * prototype, app::Vector3 position, app::Quaternion rotation, app::Nullable_1_Single_ * new_object_elapsed_millis))
    IL2CPP_REGISTER_METHOD(0x00FD3C60, app::UberPoolItem *, CreatePoolItemForGO, (app::UberPoolGroup * this_ptr, app::GameObject * new_obj))
    IL2CPP_REGISTER_METHOD(0x00FD3F60, void, BroadcastCallbacks, (app::UberPoolItem * pool_object))
    IL2CPP_REGISTER_METHOD(0x00FD4290, app::GameObject *, GetNewObject, (app::UberPoolGroup * this_ptr, app::GameObject * prototype, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x00FD46B0, void, AddLoadedFromSceneCount, (app::UberPoolGroup * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x00FD4780, void, RemoveLoadedFromSceneCount, (app::UberPoolGroup * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x00FD4920, void, DoUpdate, (app::UberPoolGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD4A30, bool, PruneObjectAtIndex, (app::UberPoolGroup * this_ptr, int32_t index, float inactivity_time))
    IL2CPP_REGISTER_METHOD(0x00FD4D00, void, PruneToMinAmount, (app::UberPoolGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD4920, void, PruneObjectsIfNeeded, (app::UberPoolGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD4DE0, void, ctor, (app::UberPoolGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FD4F40, void, cctor, ())
}
