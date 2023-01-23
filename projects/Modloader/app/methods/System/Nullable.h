#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Nullable {
    IL2CPP_REGISTER_METHOD(0x0226F650, app::Type*, GetUnderlyingType, (app::Type * nullable_type))
    IL2CPP_REGISTER_METHODINFO(0x04753E78, Nullable_GetUnderlyingType__MethodInfo)
} // namespace app::classes::System::Nullable
