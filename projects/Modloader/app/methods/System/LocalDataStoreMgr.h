#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocalDataStoreHolder.h>
#include <Modloader/app/structs/LocalDataStore.h>
#include <Modloader/app/structs/LocalDataStoreMgr.h>
#include <Modloader/app/structs/LocalDataStoreSlot.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::LocalDataStoreMgr {
    IL2CPP_REGISTER_METHOD(0x02266C80, app::LocalDataStoreHolder*, CreateLocalDataStore, (app::LocalDataStoreMgr * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02266FC0, void, DeleteLocalDataStore, (app::LocalDataStoreMgr * this_ptr, app::LocalDataStore* store))
    IL2CPP_REGISTER_METHOD(0x02267110, app::LocalDataStoreSlot*, AllocateDataSlot, (app::LocalDataStoreMgr * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02267450, app::LocalDataStoreSlot*, AllocateNamedDataSlot, (app::LocalDataStoreMgr * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x022675F0, app::LocalDataStoreSlot*, GetNamedDataSlot, (app::LocalDataStoreMgr * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02267780, void, FreeNamedDataSlot, (app::LocalDataStoreMgr * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x022678D0, void, FreeDataSlot, (app::LocalDataStoreMgr * this_ptr, int32_t slot, int64_t cookie))
    IL2CPP_REGISTER_METHOD(0x02267B30, void, ValidateSlot, (app::LocalDataStoreMgr * this_ptr, app::LocalDataStoreSlot* slot))
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, GetSlotTableLength, (app::LocalDataStoreMgr * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02267C00, void, ctor, (app::LocalDataStoreMgr * this_ptr))
} // namespace app::classes::System::LocalDataStoreMgr
