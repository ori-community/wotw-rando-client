#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PipelineStageBase_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/BlockingCollection_1_System_Object_.h>
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::PlayFab::Pipeline::PipelineStageBase_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitStage, (app::PipelineStageBase_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D16110, void, RunStage, (app::PipelineStageBase_2_System_Object_System_Object_ * this_ptr, app::BlockingCollection_1_System_Object_* input, app::BlockingCollection_1_System_Object_* output, app::CancellationTokenSource* cts))
    IL2CPP_REGISTER_METHOD(0x01D16470, app::IEnumerable_1_System_Object_*, GetInputConsumingEnumerable, (app::PipelineStageBase_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D164A0, void, StoreOutput, (app::PipelineStageBase_2_System_Object_System_Object_ * this_ptr, app::Object* output_item))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::PipelineStageBase_2_System_Object_System_Object_ * this_ptr))
} // namespace app::classes::PlayFab::Pipeline::PipelineStageBase_2_System_Object_System_Object_
