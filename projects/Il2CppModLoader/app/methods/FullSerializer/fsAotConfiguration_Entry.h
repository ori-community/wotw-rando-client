#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::fsAotConfiguration_Entry {
    IL2CPP_REGISTER_METHOD(0x0012BFE0, void, ctor_1, (app::fsAotConfiguration_Entry__Boxed * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0012C020, void, ctor_2, (app::fsAotConfiguration_Entry__Boxed * this_ptr, app::Type * type, app::fsAotConfiguration_AotState__Enum state))
}
