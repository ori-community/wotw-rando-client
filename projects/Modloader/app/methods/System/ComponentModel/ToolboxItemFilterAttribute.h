#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ToolboxItemFilterAttribute.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ToolboxItemFilterType__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::ToolboxItemFilterAttribute {
    IL2CPP_REGISTER_METHOD(0x02943E10, void, ctor_1, (app::ToolboxItemFilterAttribute * this_ptr, app::String* filter_string))
    IL2CPP_REGISTER_METHOD(0x02943ED0, void, ctor_2, (app::ToolboxItemFilterAttribute * this_ptr, app::String* filter_string, app::ToolboxItemFilterType__Enum filter_type))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_FilterString, (app::ToolboxItemFilterAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::ToolboxItemFilterType__Enum, get_FilterType, (app::ToolboxItemFilterAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02943F90, app::Object*, get_TypeId, (app::ToolboxItemFilterAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02943FF0, bool, Equals, (app::ToolboxItemFilterAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x017E12D0, int32_t, GetHashCode, (app::ToolboxItemFilterAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02944130, bool, Match, (app::ToolboxItemFilterAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02944200, app::String*, ToString, (app::ToolboxItemFilterAttribute * this_ptr))
} // namespace app::classes::System::ComponentModel::ToolboxItemFilterAttribute
