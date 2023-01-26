#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_DebugMenuPage_.h>
#include <Modloader/app/structs/DebugMenuPage.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_String_DebugMenuPage_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_DebugMenuPage_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_DebugMenuPage_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_DebugMenuPage_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_DebugMenuPage_, GetEnumerator, (app::Dictionary_2_System_String_DebugMenuPage_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_DebugMenuPage_ * this_ptr, app::String* key, app::DebugMenuPage* value))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_DebugMenuPage_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::DebugMenuPage*, get_Item, (app::Dictionary_2_System_String_DebugMenuPage_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_DebugMenuPage_ * this_ptr, app::String* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_DebugMenuPage_
