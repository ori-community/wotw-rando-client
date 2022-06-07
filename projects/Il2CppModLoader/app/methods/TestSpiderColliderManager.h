#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TestSpiderColliderManager {
    IL2CPP_REGISTER_METHOD(0x010DEE40, void, Start, (app::TestSpiderColliderManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DF3E0, void, FixedUpdate, (app::TestSpiderColliderManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DFC60, void, ctor, (app::TestSpiderColliderManager * this_ptr))
}
