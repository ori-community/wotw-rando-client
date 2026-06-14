#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/SettingsPropertyWrongTypeException.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingsPropertyWrongTypeException {
    IL2CPP_REGISTER_METHOD(0x01FFDFF0, void, ctor_1, app::SettingsPropertyWrongTypeException* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01FFE020,
        void,
        ctor_2,
        app::SettingsPropertyWrongTypeException* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x01FFE050, void, ctor_3, app::SettingsPropertyWrongTypeException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01FFE080, void, ctor_4, app::SettingsPropertyWrongTypeException* this_ptr, app::String* message, app::Exception* inner_exception)
} // namespace app::classes::System::Configuration::SettingsPropertyWrongTypeException
