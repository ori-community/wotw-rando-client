#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocalDataStore.h>
#include <Modloader/app/structs/LocalDataStoreElement.h>
#include <Modloader/app/structs/LocalDataStoreMgr.h>
#include <Modloader/app/structs/LocalDataStoreSlot.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::LocalDataStore {
    IL2CPP_REGISTER_METHOD(0x02266420, void, ctor, app::LocalDataStore* this_ptr, app::LocalDataStoreMgr* mgr, int32_t initial_capacity)
    IL2CPP_REGISTER_METHOD(0x022664C0, void, Dispose, app::LocalDataStore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022664F0, app::Object*, GetData, app::LocalDataStore* this_ptr, app::LocalDataStoreSlot* slot)
    IL2CPP_REGISTER_METHOD(0x02266640, void, SetData, app::LocalDataStore* this_ptr, app::LocalDataStoreSlot* slot, app::Object* data)
    IL2CPP_REGISTER_METHOD(0x022667B0, void, FreeData, app::LocalDataStore* this_ptr, int32_t slot, int64_t cookie)
    IL2CPP_REGISTER_METHOD(0x02266820, app::LocalDataStoreElement*, PopulateElement, app::LocalDataStore* this_ptr, app::LocalDataStoreSlot* slot)
} // namespace app::classes::System::LocalDataStore
