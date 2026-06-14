#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/Tuple_2_MoonGuid_Boolean_.h>

namespace app::classes::System::Tuple_2_MoonGuid_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonGuid*, get_Item1, app::Tuple_2_MoonGuid_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Item2, app::Tuple_2_MoonGuid_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A5F4B0, void, ctor, app::Tuple_2_MoonGuid_Boolean_* this_ptr, app::MoonGuid* item1, bool item2)
} // namespace app::classes::System::Tuple_2_MoonGuid_Boolean_
