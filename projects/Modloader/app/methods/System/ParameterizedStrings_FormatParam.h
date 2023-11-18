#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParameterizedStrings_FormatParam__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParameterizedStrings_FormatParam.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ParameterizedStrings_FormatParam {
    IL2CPP_REGISTER_METHOD(0x001E1180, void, ctor_1, (app::ParameterizedStrings_FormatParam__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0013C010, void, ctor_2, (app::ParameterizedStrings_FormatParam__Boxed * this_ptr, int32_t int_value, app::String* string_value))
    IL2CPP_REGISTER_METHOD(0x0227E330, app::ParameterizedStrings_FormatParam, op_Implicit, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Int32, (app::ParameterizedStrings_FormatParam__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E1190, app::String*, get_String, (app::ParameterizedStrings_FormatParam__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E11A0, app::Object*, get_Object, (app::ParameterizedStrings_FormatParam__Boxed * this_ptr))
} // namespace app::classes::System::ParameterizedStrings_FormatParam
