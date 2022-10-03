#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Concurrent::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ {
    IL2CPP_REGISTER_METHOD(0x02AD9130, bool, TryTake, (app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * this_ptr, app::IPlayFabEmitEventRequest** item, int32_t milliseconds_timeout, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHODINFO(0x04772148, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest__TryTake__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AD8230, bool, get_IsCompleted, (app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E660, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest__get_IsCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AD96D0, void, CompleteAdding, (app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705C40, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest__CompleteAdding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AD8AD0, bool, TryAdd, (app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * this_ptr, app::IPlayFabEmitEventRequest* item))
    IL2CPP_REGISTER_METHODINFO(0x0474A808, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest__TryAdd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AD8390, void, ctor, (app::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * this_ptr, int32_t bounded_capacity))
    IL2CPP_REGISTER_METHODINFO(0x04780FB8, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Concurrent::BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_
