#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_.h>
#include <Modloader/app/structs/StandaloneWebResources_IndexEntry.h>
#include <Modloader/app/structs/StandaloneWebResources_IndexEntry__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD0C40,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::StandaloneWebResources_IndexEntry x,
        app::StandaloneWebResources_IndexEntry y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::StandaloneWebResources_IndexEntry obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0D00,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::StandaloneWebResources_IndexEntry__Array* array,
        app::StandaloneWebResources_IndexEntry value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0E90,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::StandaloneWebResources_IndexEntry__Array* array,
        app::StandaloneWebResources_IndexEntry value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CC3E60,
        bool,
        Equals_2,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CC3EB0,
        int32_t,
        GetHashCode_2,
        app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_
