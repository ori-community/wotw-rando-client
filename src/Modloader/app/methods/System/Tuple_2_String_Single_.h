#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Tuple_2_String_Single_.h>

namespace app::classes::System::Tuple_2_String_Single_ {
    IL2CPP_REGISTER_METHOD(0x02A68070, void, ctor, app::Tuple_2_String_Single_* this_ptr, app::String* item1, float item2)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Item1, app::Tuple_2_String_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Item2, app::Tuple_2_String_Single_* this_ptr)
} // namespace app::classes::System::Tuple_2_String_Single_
