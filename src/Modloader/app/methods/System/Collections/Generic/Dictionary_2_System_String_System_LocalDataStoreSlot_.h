#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_LocalDataStoreSlot_.h>
#include <Modloader/app/structs/LocalDataStoreSlot.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_LocalDataStoreSlot_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_String_System_LocalDataStoreSlot_* this_ptr,
        app::String* key,
        app::LocalDataStoreSlot* value
    )
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_System_String_System_LocalDataStoreSlot_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_System_LocalDataStoreSlot_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_LocalDataStoreSlot_
