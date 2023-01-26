#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity_c.h>
#include <Modloader/app/structs/IEntityOwned.h>

namespace app::classes::Moon::Entity___c {
    IL2CPP_REGISTER_METHOD(0x0121D110, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Entity_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0121D250, int32_t, _SortOwnedComponents_b__212_0, (app::Entity_c * this_ptr, app::IEntityOwned* x, app::IEntityOwned* y))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__359_0, (app::Entity_c * this_ptr))
} // namespace app::classes::Moon::Entity___c
