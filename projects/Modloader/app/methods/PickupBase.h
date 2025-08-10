#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CollectablePlaceholder.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PickupBase.h>

namespace app::classes::PickupBase {
    IL2CPP_REGISTER_METHOD(0x01157510, bool, get_ShouldUseLegacySerialization, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011575B0, bool, get_IsCollected, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011575F0, bool, get_IsCollectedCached, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::GameObject*, get_EffectiveCollectedEffect, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::CollectablePlaceholder*, get_Placeholder, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_Placeholder, app::PickupBase* this_ptr, app::CollectablePlaceholder* value)
    IL2CPP_REGISTER_METHOD(0x01157600, void, OnValidate, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01157760, void, OnPoolSpawned, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01157960, void, OnEnable, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01157A00, void, OnDisable, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01157AA0, void, CacheUberState, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01157B80, void, Awake, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01157E20, void, AdvanceTime, app::PickupBase* this_ptr, float d_time)
    IL2CPP_REGISTER_METHOD(0x01157E40, bool, TimeCondition, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01157E50, bool, FrustrumOptimizeCondition, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01157E70, bool, IsCollectedCondition, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01157F60, void, SpawnCollectedEffect, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01158130, void, Collected, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01158570, void, Serialize, app::PickupBase* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x01158610, app::Bounds, get_Bounds, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011586D0, void, OnFrustumEnter, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BB4E90, void, OnFrustumExit, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_InsideFrustum, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PickupStateChanged, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01158780, void, ctor, app::PickupBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01158970, void, cctor, )
} // namespace app::classes::PickupBase
