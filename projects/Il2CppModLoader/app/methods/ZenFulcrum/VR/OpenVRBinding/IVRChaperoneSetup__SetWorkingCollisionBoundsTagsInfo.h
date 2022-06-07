#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02187340, void, Invoke, (app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo * this_ptr, app::Byte__Array * p_tags_buffer, uint32_t un_tag_count))
    IL2CPP_REGISTER_METHOD(0x02F40B00, app::IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo * this_ptr, app::Byte__Array * p_tags_buffer, uint32_t un_tag_count, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo * this_ptr, app::IAsyncResult * result))
}
