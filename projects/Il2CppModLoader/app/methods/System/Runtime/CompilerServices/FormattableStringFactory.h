#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::FormattableStringFactory {
    IL2CPP_REGISTER_METHOD(0x01A92240, app::FormattableString *, Create, (app::String * format, app::Object__Array * arguments))
    IL2CPP_REGISTER_METHODINFO(0x0476E540, FormattableStringFactory_Create__MethodInfo)
}
