#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkExternalSourceInfo.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkExternalSourceInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkExternalSourceInfo* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x026E46F0, void*, getCPtr, app::AkExternalSourceInfo* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkExternalSourceInfo* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x026E4780, void, Finalize, app::AkExternalSourceInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E4800, void, Dispose, app::AkExternalSourceInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E4A10, void, ctor_2, app::AkExternalSourceInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x026E4B30,
        void,
        ctor_3,
        app::AkExternalSourceInfo* this_ptr,
        void* in_p_in_memory,
        uint32_t in_ui_memory_size,
        uint32_t in_i_external_src_cookie,
        uint32_t in_id_codec
    )
    IL2CPP_REGISTER_METHOD(
        0x026E4C90,
        void,
        ctor_4,
        app::AkExternalSourceInfo* this_ptr,
        app::String* in_psz_file_name,
        uint32_t in_i_external_src_cookie,
        uint32_t in_id_codec
    )
    IL2CPP_REGISTER_METHOD(
        0x026E4DF0,
        void,
        ctor_5,
        app::AkExternalSourceInfo* this_ptr,
        uint32_t in_id_file,
        uint32_t in_i_external_src_cookie,
        uint32_t in_id_codec
    )
    IL2CPP_REGISTER_METHOD(0x026E4F40, void, Clear, app::AkExternalSourceInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E4FE0, void, Clone, app::AkExternalSourceInfo* this_ptr, app::AkExternalSourceInfo* other)
    IL2CPP_REGISTER_METHOD(0x026E5100, int32_t, GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x026E5190, void, set_iExternalSrcCookie, app::AkExternalSourceInfo* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026E52C0, uint32_t, get_iExternalSrcCookie, app::AkExternalSourceInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E53E0, void, set_idCodec, app::AkExternalSourceInfo* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026E5510, uint32_t, get_idCodec, app::AkExternalSourceInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E5630, void, set_szFile, app::AkExternalSourceInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x026E56E0, app::String*, get_szFile, app::AkExternalSourceInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E5830, void, set_pInMemory, app::AkExternalSourceInfo* this_ptr, void* value)
    IL2CPP_REGISTER_METHOD(0x026E5960, void*, get_pInMemory, app::AkExternalSourceInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E5A80, void, set_uiMemorySize, app::AkExternalSourceInfo* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026E5BB0, uint32_t, get_uiMemorySize, app::AkExternalSourceInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E5CD0, void, set_idFile, app::AkExternalSourceInfo* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026E5E00, uint32_t, get_idFile, app::AkExternalSourceInfo* this_ptr)
} // namespace app::classes::AkExternalSourceInfo
