#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::LocalDataStoreSlot {
    IL2CPP_REGISTER_METHOD(0x0199E410, void, ctor, (app::LocalDataStoreSlot * this_ptr, app::LocalDataStoreMgr* mgr, int32_t slot, int64_t cookie))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::LocalDataStoreMgr*, get_Manager, (app::LocalDataStoreSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Slot, (app::LocalDataStoreSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_Cookie, (app::LocalDataStoreSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02267E50, void, Finalize, (app::LocalDataStoreSlot * this_ptr))
} // namespace app::classes::System::LocalDataStoreSlot
