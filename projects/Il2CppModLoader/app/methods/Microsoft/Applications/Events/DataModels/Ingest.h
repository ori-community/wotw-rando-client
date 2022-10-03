#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Ingest {
    IL2CPP_REGISTER_METHOD(0x002FA280, int64_t, get_time, (app::Ingest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_time, (app::Ingest * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_clientIp, (app::Ingest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_clientIp, (app::Ingest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_auth, (app::Ingest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_auth, (app::Ingest * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_quality, (app::Ingest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_quality, (app::Ingest * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_uploadTime, (app::Ingest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_uploadTime, (app::Ingest * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_userAgent, (app::Ingest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_userAgent, (app::Ingest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_client, (app::Ingest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_client, (app::Ingest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FCCC0, void, ctor_1, (app::Ingest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCDA0, void, ctor_2, (app::Ingest * this_ptr, app::String* full_name, app::String* name))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Ingest
