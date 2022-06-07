#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IOSelector {
    IL2CPP_REGISTER_METHOD(0x0200ADB0, void, Add, (void * handle, app::IOSelectorJob * job))
}
