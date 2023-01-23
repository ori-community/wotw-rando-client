#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MemoryCleanUpTask.h>
#include <Modloader/app/structs/ArtOptimizationDataModel.h>
#include <Modloader/app/structs/UberShaderComponent.h>

namespace app::classes::Moon::ArtOptimization::MemoryCleanUpTask {
    IL2CPP_REGISTER_METHOD(0x0134BBB0, void, ctor, (app::MemoryCleanUpTask * this_ptr, app::ArtOptimizationDataModel* data_model, app::UberShaderComponent* uber_shader))
    IL2CPP_REGISTER_METHOD(0x0134BBC0, void, Update, (app::MemoryCleanUpTask * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::MemoryCleanUpTask
