#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GeneralDebugMenuPage_SceneInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectComparer_1_GeneralDebugMenuPage_SceneInfo_.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_GeneralDebugMenuPage_SceneInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x02C2AFB0,
        int32_t,
        Compare,
        app::ObjectComparer_1_GeneralDebugMenuPage_SceneInfo_* this_ptr,
        app::GeneralDebugMenuPage_SceneInfo x,
        app::GeneralDebugMenuPage_SceneInfo y
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, app::ObjectComparer_1_GeneralDebugMenuPage_SceneInfo_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, app::ObjectComparer_1_GeneralDebugMenuPage_SceneInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectComparer_1_GeneralDebugMenuPage_SceneInfo_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_GeneralDebugMenuPage_SceneInfo_
