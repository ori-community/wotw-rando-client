#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LoadFromMasterAtStart {
    IL2CPP_REGISTER_METHOD(0x00FB4120, void, Start, (app::LoadFromMasterAtStart * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB41D0, void, ctor, (app::LoadFromMasterAtStart * this_ptr))
}
