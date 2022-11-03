#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Race::Networking::WebServiceCommunicator {
    IL2CPP_REGISTER_METHOD(0x00C47000, app::String*, get_WebBaseUrl, ())
    IL2CPP_REGISTER_METHOD(0x00C470B0, app::String*, Get_1, (app::String * site_id, app::LeaderboadData* data_holder))
    IL2CPP_REGISTER_METHOD(0x00C47350, app::String*, Get_2, (app::String * site_id, app::String* player_id, app::ReplayData* data_holder))
    IL2CPP_REGISTER_METHOD(0x00C475F0, app::String*, Post, (app::String * site_id, app::ReplayData* data))
    IL2CPP_REGISTER_METHOD(0x00C478A0, app::String*, Delete, (app::String * site_id, app::String* player_id))
} // namespace app::classes::Moon::Race::Networking::WebServiceCommunicator
