#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DynamicDataExportClassAttribute.h>
#include <Modloader/app/structs/DataProviderID__Enum.h>

namespace app::classes::Moon::DynamicDataExportClassAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_CustomInspectorName, (app::DynamicDataExportClassAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_CustomInspectorName, (app::DynamicDataExportClassAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, ctor, (app::DynamicDataExportClassAttribute * this_ptr, app::DataProviderID__Enum id))
} // namespace app::classes::Moon::DynamicDataExportClassAttribute
