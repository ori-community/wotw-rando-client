#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_.h>
#include <Modloader/app/structs/Predicate_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_.h>
#include <Modloader/app/structs/VRBrowserPanel.h>

namespace app::classes::System::Collections::Generic::List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_ {
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex,
        app::List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* this_ptr,
        app::Predicate_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, app::List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* this_ptr, int32_t index, app::VRBrowserPanel* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::VRBrowserPanel*, get_Item, app::List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_* this_ptr, app::VRBrowserPanel* item)
} // namespace app::classes::System::Collections::Generic::List_1_ZenFulcrum_EmbeddedBrowser_VRBrowserPanel_
