#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::InvariantComparer {
    IL2CPP_REGISTER_METHOD(0x0200CED0, void, ctor, (app::InvariantComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200CF90, int32_t, Compare, (app::InvariantComparer * this_ptr, app::Object * a, app::Object * b))
    IL2CPP_REGISTER_METHOD(0x0200D0C0, void, cctor, ())
}
