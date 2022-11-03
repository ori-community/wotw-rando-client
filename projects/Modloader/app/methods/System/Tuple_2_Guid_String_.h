#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Tuple_2_Guid_String_ {
    IL2CPP_REGISTER_METHOD(0x01349560, app::Guid, get_Item1, (app::Tuple_2_Guid_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715480, Tuple_2_Guid_String__get_Item1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Item2, (app::Tuple_2_Guid_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A118, Tuple_2_Guid_String__get_Item2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A63920, void, ctor, (app::Tuple_2_Guid_String_ * this_ptr, app::Guid item1, app::String* item2))
    IL2CPP_REGISTER_METHODINFO(0x04724730, Tuple_2_Guid_String___ctor__MethodInfo)
} // namespace app::classes::System::Tuple_2_Guid_String_
