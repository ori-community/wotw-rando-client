#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonRenderPipelineView.h>

namespace app::classes::UberWaterControl_Simulation {
    IL2CPP_REGISTER_METHOD(0x0129D990, void, Execute, (app::MoonRenderPipelineView * view))
    IL2CPP_REGISTER_METHOD(0x0129DB20, void, Clear, (app::MoonRenderPipelineView * view))
    IL2CPP_REGISTER_METHOD(0x0129DCD0, void, cctor, ())
} // namespace app::classes::UberWaterControl_Simulation
