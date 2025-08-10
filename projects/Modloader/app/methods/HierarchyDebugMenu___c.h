#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/HierarchyDebugMenu_c.h>

namespace app::classes::HierarchyDebugMenu___c {
    IL2CPP_REGISTER_METHOD(0x00B521E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::HierarchyDebugMenu_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00B52320,
        int32_t,
        _BuildHierarchy_b__46_0,
        app::HierarchyDebugMenu_c* this_ptr,
        app::HierarchyDebugMenu_GameObjectItem* a,
        app::HierarchyDebugMenu_GameObjectItem* b
    )
} // namespace app::classes::HierarchyDebugMenu___c
