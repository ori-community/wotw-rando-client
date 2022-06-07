#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ArtOptimization::MemoryCleanUpTask {
    IL2CPP_REGISTER_METHOD(0x0134BBB0, void, ctor, (app::MemoryCleanUpTask * this_ptr, app::ArtOptimizationDataModel * data_model, app::UberShaderComponent * uber_shader))
    IL2CPP_REGISTER_METHOD(0x0134BBC0, void, Update, (app::MemoryCleanUpTask * this_ptr))
}
