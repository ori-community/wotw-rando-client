#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ContinuousIntegration::VariablesProvider {
    IL2CPP_REGISTER_METHOD(0x0318EC30, app::Dictionary_2_System_String_System_String_ *, get_Arguments, (app::VariablesProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0318EDE0, app::String *, GetVariableRaw, (app::VariablesProvider * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHOD(0x0318EDF0, app::String *, GetArgumentRaw, (app::VariablesProvider * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHOD(0x0318EEF0, app::Dictionary_2_System_String_System_String_ *, ParseArguments, (app::VariablesProvider * this_ptr, app::String__Array * args))
    IL2CPP_REGISTER_METHOD(0x0318F6B0, bool, HasVariable, (app::VariablesProvider * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHOD(0x0318F6E0, bool, HasArgument, (app::VariablesProvider * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::VariablesProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015EF8E0, app::Object *, GetVariable, (app::VariablesProvider * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHODINFO(0x0478A830, VariablesProvider_GetVariable__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154F690, void, ReadVariable, (app::VariablesProvider * this_ptr, app::String * key, app::Object * * collector))
    IL2CPP_REGISTER_METHODINFO(0x0478CE40, VariablesProvider_ReadVariable__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154F420, void, ReadArgument, (app::VariablesProvider * this_ptr, app::String * key, app::Object * * collector))
}
