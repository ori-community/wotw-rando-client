#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::ArgInfo {
    IL2CPP_REGISTER_METHOD(0x02309730, void, ctor, (app::ArgInfo * this_ptr, app::MethodBase * method_1, app::ArgInfoType__Enum type))
    IL2CPP_REGISTER_METHOD(0x023099D0, app::Object__Array *, GetInOutArgs, (app::ArgInfo * this_ptr, app::Object__Array * args))
}
