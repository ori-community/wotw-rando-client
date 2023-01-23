#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LizardEntity_c.h>
#include <Modloader/app/structs/LizardEntity.h>

namespace app::classes::LizardEntity___c {
    IL2CPP_REGISTER_METHOD(0x00FAE680, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LizardEntity_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__68_0, (app::LizardEntity_c * this_ptr, app::LizardEntity* lizard))
    IL2CPP_REGISTER_METHODINFO(0x04744468, LizardEntity_c___cctor_b__68_0__MethodInfo)
} // namespace app::classes::LizardEntity___c
