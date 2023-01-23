#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Converter_2_Type_String_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Converter_2_Type_String_ {
    IL2CPP_REGISTER_METHOD(0x01852930, app::String*, Invoke, (app::Converter_2_Type_String_ * this_ptr, app::Type* input))
    IL2CPP_REGISTER_METHODINFO(0x0473C5C0, Converter_2_Type_String__Invoke__MethodInfo)
} // namespace app::classes::System::Converter_2_Type_String_
