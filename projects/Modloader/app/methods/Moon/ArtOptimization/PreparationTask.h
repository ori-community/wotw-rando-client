#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PreparationTask_1.h>

namespace app::classes::Moon::ArtOptimization::PreparationTask {
    IL2CPP_REGISTER_METHOD(0x0134F500, void, ctor, (app::PreparationTask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0134F650, void, Update, (app::PreparationTask_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0134F780, void, SetupPlayer, (app::PreparationTask_1 * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::PreparationTask
