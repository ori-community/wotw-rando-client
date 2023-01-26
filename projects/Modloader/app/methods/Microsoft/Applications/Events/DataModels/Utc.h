#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Utc.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Utc {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_stId, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_stId, (app::Utc * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_aId, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_aId, (app::Utc * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_raId, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_raId, (app::Utc * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_op, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_op, (app::Utc * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_cat, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_cat, (app::Utc * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, int64_t, get_flags, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_flags, (app::Utc * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_sqmId, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_sqmId, (app::Utc * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_mon, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_mon, (app::Utc * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_cpId, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_cpId, (app::Utc * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_bSeq, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_bSeq, (app::Utc * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_epoch, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_epoch, (app::Utc * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, int64_t, get_seq, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_seq, (app::Utc * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FD4B0, void, ctor_1, (app::Utc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::Utc * this_ptr, app::String* full_name, app::String* name))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Utc
