#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Tuple_2_Guid_String_.h>

namespace app::classes::System::Tuple_2_Guid_String_ {
    IL2CPP_REGISTER_METHOD(0x01349560, app::Guid, get_Item1, app::Tuple_2_Guid_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Item2, app::Tuple_2_Guid_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A63920, void, ctor, app::Tuple_2_Guid_String_* this_ptr, app::Guid item1, app::String* item2)
} // namespace app::classes::System::Tuple_2_Guid_String_
