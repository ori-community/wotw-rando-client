#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/SimpleCollator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor, (app::Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ * this_ptr, app::IEqualityComparer_1_System_String_* comparer))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ * this_ptr, app::String* key, app::SimpleCollator** value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ * this_ptr, app::String* key, app::SimpleCollator* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_
