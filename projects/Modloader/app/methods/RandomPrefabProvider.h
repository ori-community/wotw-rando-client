#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RandomPrefabProvider {
    IL2CPP_REGISTER_METHOD(0x0072F9F0, app::GameObject*, Prefab, (app::RandomPrefabProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0072FB20, app::GameObject__Array*, GetPotentialPrefabs, (app::RandomPrefabProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072FBB0, void, ctor, (app::RandomPrefabProvider * this_ptr))
} // namespace app::classes::RandomPrefabProvider
