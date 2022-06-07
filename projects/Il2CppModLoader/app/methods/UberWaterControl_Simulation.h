#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberWaterControl_Simulation {
    IL2CPP_REGISTER_METHOD(0x0129D990, void, Execute, (app::MoonRenderPipelineView * view))
    IL2CPP_REGISTER_METHOD(0x0129DB20, void, Clear, (app::MoonRenderPipelineView * view))
    IL2CPP_REGISTER_METHOD(0x0129DCD0, void, cctor, ())
}
