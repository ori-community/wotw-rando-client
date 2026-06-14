#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocalVariableInfo.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::LocalVariableInfo {
    IL2CPP_REGISTER_METHOD(0x0268AE40, app::String*, ToString, app::LocalVariableInfo* this_ptr)
}
