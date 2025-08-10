#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_UriParser_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UriParser.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_UriParser_ {
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, app::Dictionary_2_System_String_System_UriParser_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, app::Dictionary_2_System_String_System_UriParser_* this_ptr, app::String* key, app::UriParser* value)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, app::Dictionary_2_System_String_System_UriParser_* this_ptr, app::String* key, app::UriParser** value)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_String_System_UriParser_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_UriParser_
