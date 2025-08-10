#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StandaloneWebResources_IndexEntry.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x001516F0,
        void,
        ctor,
        app::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry___Boxed* this_ptr,
        app::Object* key,
        app::StandaloneWebResources_IndexEntry value
    )
    IL2CPP_REGISTER_METHOD(
        0x00107C00,
        app::Object*,
        get_Key,
        app::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00150500,
        app::StandaloneWebResources_IndexEntry,
        get_Value,
        app::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00151710,
        app::String*,
        ToString,
        app::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Object_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_
