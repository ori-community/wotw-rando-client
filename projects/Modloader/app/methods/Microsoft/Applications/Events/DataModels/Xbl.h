#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/Nullable_1_Int64_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Xbl.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Xbl {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Dictionary_2_System_String_System_String_*, get_claims, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_claims, app::Xbl* this_ptr, app::Dictionary_2_System_String_System_String_* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_nbf, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_nbf, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_exp, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_exp, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_sbx, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_sbx, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_dty, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_dty, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_did, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_did, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_xid, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_xid, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, uint64_t, get_uts, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_uts, app::Xbl* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_pid, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_pid, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_dvr, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_dvr, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FD750, uint32_t, get_tid, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_tid, app::Xbl* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String*, get_tvr, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_tvr, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String*, get_sty, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_sty, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String*, get_sid, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_sid, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FD770, app::Nullable_1_Int64_, get_eid, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD780, void, set_eid, app::Xbl* this_ptr, app::Nullable_1_Int64_ value)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_ip, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_ip, app::Xbl* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FD790, void, ctor_1, app::Xbl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, app::Xbl* this_ptr, app::String* full_name, app::String* name)
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Xbl
