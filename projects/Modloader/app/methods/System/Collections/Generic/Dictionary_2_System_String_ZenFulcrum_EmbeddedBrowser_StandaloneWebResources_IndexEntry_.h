#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_.h>
#include <Modloader/app/structs/StandaloneWebResources_IndexEntry.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DB6430, void, set_Item, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ * this_ptr, app::String* key, app::StandaloneWebResources_IndexEntry value))
    IL2CPP_REGISTER_METHOD(0x02DB8340, bool, TryGetValue, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ * this_ptr, app::String* key, app::StandaloneWebResources_IndexEntry* value))
    IL2CPP_REGISTER_METHOD(0x02EF8F30, app::StandaloneWebResources_IndexEntry, get_Item, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_ * this_ptr, app::String* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_StandaloneWebResources_IndexEntry_
