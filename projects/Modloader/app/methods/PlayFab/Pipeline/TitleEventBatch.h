#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayFab::Pipeline::TitleEventBatch {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_TitleId, (app::TitleEventBatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_TitleId, (app::TitleEventBatch * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_PlayFab_IPlayFabEmitEventRequest_*, get_Events, (app::TitleEventBatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Events, (app::TitleEventBatch * this_ptr, app::List_1_PlayFab_IPlayFabEmitEventRequest_* value))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::TitleEventBatch * this_ptr, app::String* title_id, app::List_1_PlayFab_IPlayFabEmitEventRequest_* events))
} // namespace app::classes::PlayFab::Pipeline::TitleEventBatch
