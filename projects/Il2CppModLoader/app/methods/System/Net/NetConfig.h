#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::NetConfig {
    IL2CPP_REGISTER_METHOD(0x01E71D00, void, ctor, (app::NetConfig * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object *, ICloneable_Clone, (app::NetConfig * this_ptr))
}
