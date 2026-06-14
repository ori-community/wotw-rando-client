#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_Type_System_String_* this_ptr, app::Type* key, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::String*, get_Item, app::Dictionary_2_System_Type_System_String_* this_ptr, app::Type* key)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, app::Dictionary_2_System_Type_System_String_* this_ptr, app::Type* key, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_System_String_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_String_
