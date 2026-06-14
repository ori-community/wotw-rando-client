#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FormattableStringFactory_ConcreteFormattableString.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString {
    IL2CPP_REGISTER_METHOD(
        0x0058DA40,
        void,
        ctor,
        app::FormattableStringFactory_ConcreteFormattableString* this_ptr,
        app::String* format,
        app::Object__Array* arguments
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Format, app::FormattableStringFactory_ConcreteFormattableString* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object__Array*, GetArguments, app::FormattableStringFactory_ConcreteFormattableString* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_ArgumentCount, app::FormattableStringFactory_ConcreteFormattableString* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A92420, app::Object*, GetArgument, app::FormattableStringFactory_ConcreteFormattableString* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x01A92460,
        app::String*,
        ToString,
        app::FormattableStringFactory_ConcreteFormattableString* this_ptr,
        app::IFormatProvider* format_provider
    )
} // namespace app::classes::System::Runtime::CompilerServices::FormattableStringFactory_ConcreteFormattableString
