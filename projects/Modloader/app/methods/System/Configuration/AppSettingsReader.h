#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::AppSettingsReader {
    IL2CPP_REGISTER_METHOD(0x02960FA0, void, ctor, (app::AppSettingsReader * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790A40, AppSettingsReader__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02960FD0, app::Object*, GetValue, (app::AppSettingsReader * this_ptr, app::String* key, app::Type* type))
    IL2CPP_REGISTER_METHODINFO(0x04798368, AppSettingsReader_GetValue__MethodInfo)
} // namespace app::classes::System::Configuration::AppSettingsReader
