#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02187340,
        void,
        Invoke,
        app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo* this_ptr,
        app::Byte__Array* p_tags_buffer,
        uint32_t un_tag_count
    )
    IL2CPP_REGISTER_METHOD(
        0x02F40B00,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo* this_ptr,
        app::Byte__Array* p_tags_buffer,
        uint32_t un_tag_count,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo
