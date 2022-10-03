#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkPlaylistItem {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkPlaylistItem * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x0188E380, void*, getCPtr, (app::AkPlaylistItem * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkPlaylistItem * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x0188E410, void, Finalize, (app::AkPlaylistItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188E490, void, Dispose, (app::AkPlaylistItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188E6A0, void, ctor_2, (app::AkPlaylistItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188E7C0, void, ctor_3, (app::AkPlaylistItem * this_ptr, app::AkPlaylistItem* in_r_copy))
    IL2CPP_REGISTER_METHOD(0x0188E900, app::AkPlaylistItem*, Assign, (app::AkPlaylistItem * this_ptr, app::AkPlaylistItem* in_r_copy))
    IL2CPP_REGISTER_METHOD(0x0188EB70, bool, IsEqualTo, (app::AkPlaylistItem * this_ptr, app::AkPlaylistItem* in_r_copy))
    IL2CPP_REGISTER_METHOD(0x0188ED10, app::AKRESULT__Enum, SetExternalSources, (app::AkPlaylistItem * this_ptr, uint32_t in_n_external_src, app::AkExternalSourceInfoArray* in_p_external_src))
    IL2CPP_REGISTER_METHOD(0x0188EE60, void, set_audioNodeID, (app::AkPlaylistItem * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0188EF90, uint32_t, get_audioNodeID, (app::AkPlaylistItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188F0B0, void, set_msDelay, (app::AkPlaylistItem * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0188F1E0, int32_t, get_msDelay, (app::AkPlaylistItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188F300, void, set_pCustomInfo, (app::AkPlaylistItem * this_ptr, void* value))
    IL2CPP_REGISTER_METHOD(0x0188F430, void*, get_pCustomInfo, (app::AkPlaylistItem * this_ptr))
} // namespace app::classes::AkPlaylistItem
