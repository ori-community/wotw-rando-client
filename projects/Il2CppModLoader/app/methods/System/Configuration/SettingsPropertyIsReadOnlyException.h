#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Configuration::SettingsPropertyIsReadOnlyException {
    IL2CPP_REGISTER_METHOD(0x02963490, void, ctor_1, (app::SettingsPropertyIsReadOnlyException * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777840, SettingsPropertyIsReadOnlyException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029634C0, void, ctor_2, (app::SettingsPropertyIsReadOnlyException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04756540, SettingsPropertyIsReadOnlyException__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029634F0, void, ctor_3, (app::SettingsPropertyIsReadOnlyException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHODINFO(0x04770C90, SettingsPropertyIsReadOnlyException__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02963520, void, ctor_4, (app::SettingsPropertyIsReadOnlyException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHODINFO(0x04781E48, SettingsPropertyIsReadOnlyException__ctor_3__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsPropertyIsReadOnlyException
