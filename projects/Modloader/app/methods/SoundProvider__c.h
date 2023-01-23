#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SoundProvider_c.h>
#include <Modloader/app/structs/SoundProvider.h>

namespace app::classes::SoundProvider___c {
    IL2CPP_REGISTER_METHOD(0x00EECCF0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SoundProvider_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__7_0, (app::SoundProvider_c * this_ptr, app::SoundProvider* _p0_))
    IL2CPP_REGISTER_METHODINFO(0x0475AE98, SoundProvider_c___cctor_b__7_0__MethodInfo)
} // namespace app::classes::SoundProvider___c
