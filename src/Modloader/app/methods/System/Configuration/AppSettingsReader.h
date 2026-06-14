#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppSettingsReader.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Configuration::AppSettingsReader {
    IL2CPP_REGISTER_METHOD(0x02960FA0, void, ctor, app::AppSettingsReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02960FD0, app::Object*, GetValue, app::AppSettingsReader* this_ptr, app::String* key, app::Type* type)
} // namespace app::classes::System::Configuration::AppSettingsReader
