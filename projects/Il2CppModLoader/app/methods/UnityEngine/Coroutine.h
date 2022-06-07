#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Coroutine {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Coroutine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242AD60, void, Finalize, (app::Coroutine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242AE20, void, ReleaseCoroutine, (void * ptr))
}
