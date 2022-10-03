#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ParameterizedStrings {
    IL2CPP_REGISTER_METHOD(0x0227C930, app::String*, Evaluate, (app::String * format, app::ParameterizedStrings_FormatParam__Array* args))
    IL2CPP_REGISTER_METHODINFO(0x04710188, ParameterizedStrings_Evaluate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0227CC40, app::String*, EvaluateInternal, (app::String * format, int32_t* pos, app::ParameterizedStrings_FormatParam__Array* args, app::ParameterizedStrings_LowLevelStack* stack, app::ParameterizedStrings_FormatParam__Array** dynamic_vars, app::ParameterizedStrings_FormatParam__Array** static_vars))
    IL2CPP_REGISTER_METHODINFO(0x0474FD48, ParameterizedStrings_EvaluateInternal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020378B0, bool, AsBool, (int32_t i))
    IL2CPP_REGISTER_METHOD(0x0203AB80, int32_t, AsInt, (bool b))
    IL2CPP_REGISTER_METHOD(0x0227DA00, app::String*, StringFromAsciiBytes, (app::Byte__Array * buffer, int32_t offset, int32_t length))
    IL2CPP_REGISTER_METHOD(0x0227DB20, int32_t, snprintf_1, (uint8_t * str, void* size, app::String* format, app::String* arg1))
    IL2CPP_REGISTER_METHOD(0x0227DD70, int32_t, snprintf_2, (uint8_t * str, void* size, app::String* format, int32_t arg1))
    IL2CPP_REGISTER_METHOD(0x0227DF10, app::String*, FormatPrintF, (app::String * format, app::Object* arg))
    IL2CPP_REGISTER_METHODINFO(0x04782EB8, ParameterizedStrings_FormatPrintF__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0227E210, app::ParameterizedStrings_FormatParam__Array*, GetDynamicOrStaticVariables, (uint16_t c, app::ParameterizedStrings_FormatParam__Array** dynamic_vars, app::ParameterizedStrings_FormatParam__Array** static_vars, int32_t* index))
    IL2CPP_REGISTER_METHODINFO(0x04771D58, ParameterizedStrings_GetDynamicOrStaticVariables__MethodInfo)
} // namespace app::classes::System::ParameterizedStrings
