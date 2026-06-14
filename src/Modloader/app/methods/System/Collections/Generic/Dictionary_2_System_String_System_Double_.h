#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Double_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, app::Dictionary_2_System_String_System_Double_* this_ptr, app::String* key, double value)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, app::Dictionary_2_System_String_System_Double_* this_ptr, app::String* key, double* value)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Double_
