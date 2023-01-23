#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LocalDataStoreElement.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::LocalDataStoreElement {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor, (app::LocalDataStoreElement * this_ptr, int64_t cookie))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Value, (app::LocalDataStoreElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Value, (app::LocalDataStoreElement * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, get_Cookie, (app::LocalDataStoreElement * this_ptr))
} // namespace app::classes::System::LocalDataStoreElement
