#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HierarchyDebugMenu_GameObjectItem {
    IL2CPP_REGISTER_METHOD(0x00B52660, void, ctor, (app::HierarchyDebugMenu_GameObjectItem * this_ptr, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x00B52F70, void, UpdateDataFromTarget, (app::HierarchyDebugMenu_GameObjectItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B53940, void, UpdateDataOnTargetAndChildren, (app::HierarchyDebugMenu_GameObjectItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::HierarchyDebugMenu_CompareType__Enum, get_CurrentSortType, (app::HierarchyDebugMenu_GameObjectItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B53A90, void, SortChildren, (app::HierarchyDebugMenu_GameObjectItem * this_ptr, app::HierarchyDebugMenu_CompareType__Enum comparison_type))
    IL2CPP_REGISTER_METHODINFO(0x0475A0D8, HierarchyDebugMenu_GameObjectItem_SortChildren__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B53E80, bool, get_HasChildren, (app::HierarchyDebugMenu_GameObjectItem * this_ptr))
} // namespace app::classes::HierarchyDebugMenu_GameObjectItem
