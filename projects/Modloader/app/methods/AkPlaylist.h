#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkPlaylist.h>
#include <Modloader/app/structs/AKRESULT__Enum.h>
#include <Modloader/app/structs/AkExternalSourceInfoArray.h>

namespace app::classes::AkPlaylist {
    IL2CPP_REGISTER_METHOD(0x0188A780, void, ctor_1, (app::AkPlaylist * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x0188A840, void*, getCPtr, (app::AkPlaylist * obj))
    IL2CPP_REGISTER_METHOD(0x0188A8D0, void, setCPtr, (app::AkPlaylist * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x0188A9A0, void, Finalize, (app::AkPlaylist * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188AA40, void, Dispose, (app::AkPlaylist * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188AC60, app::AKRESULT__Enum, Enqueue_1, (app::AkPlaylist * this_ptr, uint32_t in_audio_node_i_d, int32_t in_ms_delay, void* in_p_custom_info, uint32_t in_c_externals, app::AkExternalSourceInfoArray* in_p_external_sources))
    IL2CPP_REGISTER_METHOD(0x0188ADE0, app::AKRESULT__Enum, Enqueue_2, (app::AkPlaylist * this_ptr, uint32_t in_audio_node_i_d, int32_t in_ms_delay, void* in_p_custom_info, uint32_t in_c_externals))
    IL2CPP_REGISTER_METHOD(0x0188AF30, app::AKRESULT__Enum, Enqueue_3, (app::AkPlaylist * this_ptr, uint32_t in_audio_node_i_d, int32_t in_ms_delay, void* in_p_custom_info))
    IL2CPP_REGISTER_METHOD(0x0188B080, app::AKRESULT__Enum, Enqueue_4, (app::AkPlaylist * this_ptr, uint32_t in_audio_node_i_d, int32_t in_ms_delay))
    IL2CPP_REGISTER_METHOD(0x0188B1C0, app::AKRESULT__Enum, Enqueue_5, (app::AkPlaylist * this_ptr, uint32_t in_audio_node_i_d))
    IL2CPP_REGISTER_METHOD(0x0188B2F0, void, ctor_2, (app::AkPlaylist * this_ptr))
} // namespace app::classes::AkPlaylist
