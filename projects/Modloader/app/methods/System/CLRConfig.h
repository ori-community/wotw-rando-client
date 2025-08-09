#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::CLRConfig {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CheckThrowUnobservedTaskExceptions, )
}
