#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityPlaceholder_c.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Entity.h>

namespace app::classes::EntityPlaceholder___c {
    IL2CPP_REGISTER_METHOD(0x00C9D930, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityPlaceholder_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C9DA70, bool, _RunNullCleanupFromGlobalList_b__141_0, (app::EntityPlaceholder_c * this_ptr, app::Entity* x))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__190_0, (app::EntityPlaceholder_c * this_ptr, app::Damage* _p0_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__190_1, (app::EntityPlaceholder_c * this_ptr, app::DamageResult _p0_))
} // namespace app::classes::EntityPlaceholder___c
