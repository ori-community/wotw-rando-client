#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeParameterInfo.h>

namespace app::classes::System::Reflection::RuntimeParameterInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RuntimeParameterInfo * this_ptr))
}
