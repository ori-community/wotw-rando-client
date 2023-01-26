#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_.h>
#include <Modloader/app/structs/IPlayFabEmitEventResponse.h>
#include <Modloader/app/structs/Task_1_PlayFab_IPlayFabEmitEventResponse_.h>

namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_ {
    IL2CPP_REGISTER_METHOD(0x02777830, void, SetCanceled, (app::TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02777740, void, SetResult, (app::TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_ * this_ptr, app::IPlayFabEmitEventResponse* result))
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor, (app::TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Task_1_PlayFab_IPlayFabEmitEventResponse_*, get_Task, (app::TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_ * this_ptr))
} // namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_
