#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocalDataStore.h>
#include <Modloader/app/structs/LocalDataStoreHolder.h>

namespace app::classes::System::LocalDataStoreHolder {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::LocalDataStoreHolder* this_ptr, app::LocalDataStore* store)
    IL2CPP_REGISTER_METHOD(0x02266BE0, void, Finalize, app::LocalDataStoreHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::LocalDataStore*, get_Store, app::LocalDataStoreHolder* this_ptr)
} // namespace app::classes::System::LocalDataStoreHolder
