#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EventBatchingStage_GetInputConsumingEnumerable_d_19.h>
#include <Modloader/app/structs/IPlayFabEmitEventRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator_1_PlayFab_IPlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::PlayFab::Pipeline::EventBatchingStage__GetInputConsumingEnumerable_d__19 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::EventBatchingStage_GetInputConsumingEnumerable_d_19 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::EventBatchingStage_GetInputConsumingEnumerable_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017AF7D0, bool, MoveNext, (app::EventBatchingStage_GetInputConsumingEnumerable_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IPlayFabEmitEventRequest*, IEnumerator_IPlayFabEmitEventRequest__get_Current, (app::EventBatchingStage_GetInputConsumingEnumerable_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017AFAA0, void, IEnumerator_Reset, (app::EventBatchingStage_GetInputConsumingEnumerable_d_19 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B3B8, EventBatchingStage_GetInputConsumingEnumerable_d_19_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::EventBatchingStage_GetInputConsumingEnumerable_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017AFAF0, app::IEnumerator_1_PlayFab_IPlayFabEmitEventRequest_*, IEnumerable_IPlayFabEmitEventRequest__GetEnumerator, (app::EventBatchingStage_GetInputConsumingEnumerable_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017AFCE0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::EventBatchingStage_GetInputConsumingEnumerable_d_19 * this_ptr))
} // namespace app::classes::PlayFab::Pipeline::EventBatchingStage__GetInputConsumingEnumerable_d__19
