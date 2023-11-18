#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt64_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr, uint64_t key, app::String** value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr, uint64_t key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String_*, get_Keys, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F08700, app::String*, get_Item, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr, uint64_t key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt64_System_String_
