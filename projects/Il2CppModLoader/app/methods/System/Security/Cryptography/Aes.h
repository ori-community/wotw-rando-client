#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::Aes {
    IL2CPP_REGISTER_METHOD(0x020C8120, void, ctor, (app::Aes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C8210, app::Aes *, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x020C8390, app::Aes *, Create_2, (app::String * algorithm_name))
    IL2CPP_REGISTER_METHODINFO(0x04752DA0, Aes_Create_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C8490, void, cctor, ())
}
