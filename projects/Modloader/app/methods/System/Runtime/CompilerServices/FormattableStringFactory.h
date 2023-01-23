#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FormattableString.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Runtime::CompilerServices::FormattableStringFactory {
    IL2CPP_REGISTER_METHOD(0x01A92240, app::FormattableString*, Create, (app::String * format, app::Object__Array* arguments))
    IL2CPP_REGISTER_METHODINFO(0x0476E540, FormattableStringFactory_Create__MethodInfo)
} // namespace app::classes::System::Runtime::CompilerServices::FormattableStringFactory
