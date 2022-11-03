#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HierarchyDebugMenuPage {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ColumnOffset, (app::HierarchyDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Name, (app::HierarchyDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IDebugMenuPage*, get_Page, (app::HierarchyDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Page, (app::HierarchyDebugMenuPage * this_ptr, app::IDebugMenuPage* value))
    IL2CPP_REGISTER_METHOD(0x00B540F0, void, RefreshItems, (app::HierarchyDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetItems, (app::HierarchyDebugMenuPage * this_ptr, app::List_1_List_1_IDebugMenuItem_* items))
    IL2CPP_REGISTER_METHOD(0x00B54390, void, ctor, (app::HierarchyDebugMenuPage * this_ptr))
} // namespace app::classes::HierarchyDebugMenuPage
