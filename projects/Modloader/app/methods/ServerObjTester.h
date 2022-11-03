#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ServerObjTester {
    IL2CPP_REGISTER_METHOD(0x00AC0020, void, Start, (app::ServerObjTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ServerObjTester * this_ptr))
} // namespace app::classes::ServerObjTester
