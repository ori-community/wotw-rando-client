#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SettingsPropertyNotFoundException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Exception.h>

namespace app::classes::System::Configuration::SettingsPropertyNotFoundException {
    IL2CPP_REGISTER_METHOD(0x01FFDAB0, void, ctor_1, (app::SettingsPropertyNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787CF0, SettingsPropertyNotFoundException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDAE0, void, ctor_2, (app::SettingsPropertyNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04742B58, SettingsPropertyNotFoundException__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDB10, void, ctor_3, (app::SettingsPropertyNotFoundException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHODINFO(0x0473CFC0, SettingsPropertyNotFoundException__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDB40, void, ctor_4, (app::SettingsPropertyNotFoundException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHODINFO(0x0474DA40, SettingsPropertyNotFoundException__ctor_3__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsPropertyNotFoundException
