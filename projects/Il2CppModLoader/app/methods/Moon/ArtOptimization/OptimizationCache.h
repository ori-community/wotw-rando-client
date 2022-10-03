#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::OptimizationCache {
    IL2CPP_REGISTER_METHOD(0x0134DBD0, void, ctor, (app::OptimizationCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0134E070, void, Initialize, (app::OptimizationCache * this_ptr, app::SceneRoot* root))
    IL2CPP_REGISTER_METHOD(0x0134F090, app::GameObject*, GetGroupByName, (app::OptimizationCache * this_ptr, app::SceneRoot* root, app::String* name))
} // namespace app::classes::Moon::ArtOptimization::OptimizationCache
