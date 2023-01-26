#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_HierarchyDebugMenu_GameObjectItem_.h>
#include <Modloader/app/structs/Comparison_1_HierarchyDebugMenu_GameObjectItem_.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/List_1_T_Enumerator_HierarchyDebugMenu_GameObjectItem_.h>

namespace app::classes::System::Collections::Generic::List_1_HierarchyDebugMenu_GameObjectItem_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::HierarchyDebugMenu_GameObjectItem*, get_Item, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_HierarchyDebugMenu_GameObjectItem_, GetEnumerator, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr, app::HierarchyDebugMenu_GameObjectItem* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr, app::HierarchyDebugMenu_GameObjectItem* item))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr, app::Comparison_1_HierarchyDebugMenu_GameObjectItem_* comparison))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr, int32_t index, app::HierarchyDebugMenu_GameObjectItem* item))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_HierarchyDebugMenu_GameObjectItem_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_HierarchyDebugMenu_GameObjectItem_
