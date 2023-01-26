#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RebindAllUberShadersTask.h>

namespace app::classes::Moon::ArtOptimization::RebindAllUberShadersTask {
    IL2CPP_REGISTER_METHOD(0x00CB3680, void, Update, (app::RebindAllUberShadersTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RebindAllUberShadersTask * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::RebindAllUberShadersTask
