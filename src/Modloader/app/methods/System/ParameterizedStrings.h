#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParameterizedStrings_FormatParam__Array.h>
#include <Modloader/app/structs/ParameterizedStrings_LowLevelStack.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ParameterizedStrings {
    IL2CPP_REGISTER_METHOD(0x0227C930, app::String*, Evaluate, app::String* format, app::ParameterizedStrings_FormatParam__Array* args)
    IL2CPP_REGISTER_METHOD(
        0x0227CC40,
        app::String*,
        EvaluateInternal,
        app::String* format,
        int32_t* pos,
        app::ParameterizedStrings_FormatParam__Array* args,
        app::ParameterizedStrings_LowLevelStack* stack,
        app::ParameterizedStrings_FormatParam__Array** dynamic_vars,
        app::ParameterizedStrings_FormatParam__Array** static_vars
    )
    IL2CPP_REGISTER_METHOD(0x020378B0, bool, AsBool, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0203AB80, int32_t, AsInt, bool b)
    IL2CPP_REGISTER_METHOD(0x0227DA00, app::String*, StringFromAsciiBytes, app::Byte__Array* buffer, int32_t offset, int32_t length)
    IL2CPP_REGISTER_METHOD(0x0227DB20, int32_t, snprintf_1, uint8_t* str, void* size, app::String* format, app::String* arg1)
    IL2CPP_REGISTER_METHOD(0x0227DD70, int32_t, snprintf_2, uint8_t* str, void* size, app::String* format, int32_t arg1)
    IL2CPP_REGISTER_METHOD(0x0227DF10, app::String*, FormatPrintF, app::String* format, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x0227E210,
        app::ParameterizedStrings_FormatParam__Array*,
        GetDynamicOrStaticVariables,
        char16_t c,
        app::ParameterizedStrings_FormatParam__Array** dynamic_vars,
        app::ParameterizedStrings_FormatParam__Array** static_vars,
        int32_t* index
    )
} // namespace app::classes::System::ParameterizedStrings
