#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsPropertyIsReadOnlyException.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingsPropertyIsReadOnlyException {
    IL2CPP_REGISTER_METHOD(0x02963490, void, ctor_1, (app::SettingsPropertyIsReadOnlyException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029634C0, void, ctor_2, (app::SettingsPropertyIsReadOnlyException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x029634F0, void, ctor_3, (app::SettingsPropertyIsReadOnlyException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02963520, void, ctor_4, (app::SettingsPropertyIsReadOnlyException * this_ptr, app::String* message, app::Exception* inner_exception))
} // namespace app::classes::System::Configuration::SettingsPropertyIsReadOnlyException
