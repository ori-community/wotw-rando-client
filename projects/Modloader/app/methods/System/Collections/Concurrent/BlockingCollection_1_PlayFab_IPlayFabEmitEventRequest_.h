#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/IPlayFabEmitEventRequest.h>

namespace app::classes::System::Collections::Concurrent::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x02AD9130,
        bool,
        TryTake,
        app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr,
        app::IPlayFabEmitEventRequest** item,
        int32_t milliseconds_timeout,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(0x02AD8230, bool, get_IsCompleted, app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD96D0, void, CompleteAdding, app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD8AD0, bool, TryAdd, app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr, app::IPlayFabEmitEventRequest* item)
    IL2CPP_REGISTER_METHOD(0x02AD8390, void, ctor, app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr, int32_t bounded_capacity)
} // namespace app::classes::System::Collections::Concurrent::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_
