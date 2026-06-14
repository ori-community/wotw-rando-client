#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PrefabPlaceholder.h>

namespace app::classes::PrefabPlaceholder {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::GameObject*, get_CurrentInstance, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6D850, void, Start, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6D930, void, Update, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6DA20, void, CleanUpOldInstance, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6DB40, void, OnDisable, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6DB50, void, SpawnPrefab, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6E1A0, void, Serialize, app::PrefabPlaceholder* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00C6E210, bool, CheckCondition, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6E2F0, void, Prewarm, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6E980, void, PoolCurrentInstance, app::PrefabPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6E9E0, void, ctor, app::PrefabPlaceholder* this_ptr)
} // namespace app::classes::PrefabPlaceholder
