#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShaderFreezeTask.h>
#include <Modloader/app/structs/IOptimizationTask.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::ArtOptimization::ShaderFreezeTask {
    IL2CPP_REGISTER_METHOD(0x00CB29E0, void, ctor, (app::ShaderFreezeTask * this_ptr, bool freeze_shader_time, float time))
    IL2CPP_REGISTER_METHOD(0x00CB29F0, void, Update, (app::ShaderFreezeTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB2AE0, void, OnEnterContext, (app::ShaderFreezeTask * this_ptr, app::IOptimizationTask* antecedent, app::Object* context_data))
} // namespace app::classes::Moon::ArtOptimization::ShaderFreezeTask
