#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_.h>
#include <Modloader/app/structs/RejectHandler.h>
#include <Modloader/app/structs/RejectHandler__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD0840,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* this_ptr,
        app::RejectHandler x,
        app::RejectHandler y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* this_ptr,
        app::RejectHandler obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0960,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* this_ptr,
        app::RejectHandler__Array* array,
        app::RejectHandler value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0AD0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* this_ptr,
        app::RejectHandler__Array* array,
        app::RejectHandler value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_
