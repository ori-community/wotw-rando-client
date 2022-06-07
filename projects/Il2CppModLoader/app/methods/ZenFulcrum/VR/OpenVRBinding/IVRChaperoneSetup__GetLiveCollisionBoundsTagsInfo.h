#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo * this_ptr, app::Byte__Array * p_tags_buffer, uint32_t * pun_tag_count))
    IL2CPP_REGISTER_METHOD(0x02F401D0, app::IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo * this_ptr, app::Byte__Array * p_tags_buffer, uint32_t * pun_tag_count, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo * this_ptr, uint32_t * pun_tag_count, app::IAsyncResult * result))
}
