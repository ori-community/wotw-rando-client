#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::Pipeline::EventBatchingStage {
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_BatchSize, (app::EventBatchingStage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_BatchSize, (app::EventBatchingStage * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::TimeSpan, get_BatchFillTimeout, (app::EventBatchingStage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_BatchFillTimeout, (app::EventBatchingStage * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x017AE930, void, ctor_1, (app::EventBatchingStage * this_ptr, app::ILogger_1 * logger))
    IL2CPP_REGISTER_METHOD(0x017AEA00, void, ctor_2, (app::EventBatchingStage * this_ptr, int32_t batch_size, app::TimeSpan batch_fill_timeout, app::ILogger_1 * logger))
    IL2CPP_REGISTER_METHOD(0x017AEC60, void, OnNextInputItem, (app::EventBatchingStage * this_ptr, app::IPlayFabEmitEventRequest * request))
    IL2CPP_REGISTER_METHOD(0x017AEFA0, app::IEnumerable_1_PlayFab_IPlayFabEmitEventRequest_ *, GetInputConsumingEnumerable, (app::EventBatchingStage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017AF130, void, StoreBatch, (app::EventBatchingStage * this_ptr, app::String * title_id))
    IL2CPP_REGISTER_METHOD(0x017AF300, void, StoreAllBatches, (app::EventBatchingStage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017AF4A0, void, CreateNewBatch, (app::EventBatchingStage * this_ptr, app::String * title_id))
    IL2CPP_REGISTER_METHOD(0x017AF640, void, InitNewBatch, (app::EventBatchingStage * this_ptr, app::String * title_id))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ValidationCheck, (app::IPlayFabEmitEventRequest * request))
    IL2CPP_REGISTER_METHOD(0x017AF710, void, cctor, ())
}
