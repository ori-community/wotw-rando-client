#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ToolboxItemAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::ToolboxItemAttribute {
    IL2CPP_REGISTER_METHOD(0x029ADF90, bool, IsDefaultAttribute, app::ToolboxItemAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029AE050, void, ctor_1, app::ToolboxItemAttribute* this_ptr, bool default_type)
    IL2CPP_REGISTER_METHOD(0x029AE0E0, void, ctor_2, app::ToolboxItemAttribute* this_ptr, app::String* toolbox_item_type_name)
    IL2CPP_REGISTER_METHOD(0x029AE1B0, void, ctor_3, app::ToolboxItemAttribute* this_ptr, app::Type* toolbox_item_type)
    IL2CPP_REGISTER_METHOD(0x029AE1F0, app::Type*, get_ToolboxItemType, app::ToolboxItemAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029AE390, app::String*, get_ToolboxItemTypeName, app::ToolboxItemAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029AE420, bool, Equals, app::ToolboxItemAttribute* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x029AE550, int32_t, GetHashCode, app::ToolboxItemAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029AE580, void, cctor, )
} // namespace app::classes::System::ComponentModel::ToolboxItemAttribute
