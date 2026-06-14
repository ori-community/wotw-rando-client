#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPlayFabEmitEventRequest.h>
#include <Modloader/app/structs/List_1_PlayFab_IPlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_PlayFab_IPlayFabEmitEventRequest_.h>

namespace app::classes::System::Collections::Generic::List_1_PlayFab_IPlayFabEmitEventRequest_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr, app::IPlayFabEmitEventRequest* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_PlayFab_IPlayFabEmitEventRequest_,
        GetEnumerator,
        app::List_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IPlayFabEmitEventRequest*, get_Item, app::List_1_PlayFab_IPlayFabEmitEventRequest_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_PlayFab_IPlayFabEmitEventRequest_
