#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WwiseEventSystem_c.h>

namespace app::classes::Moon::Wwise::WwiseEventSystem___c {
    IL2CPP_REGISTER_METHOD(0x027134F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WwiseEventSystem_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__14_0, app::WwiseEventSystem_c* this_ptr, uint32_t _p0_, app::Vector3 _p1_, bool _p2_)
} // namespace app::classes::Moon::Wwise::WwiseEventSystem___c
