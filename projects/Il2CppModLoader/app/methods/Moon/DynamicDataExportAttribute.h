#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::DynamicDataExportAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_CustomInspectorName, (app::DynamicDataExportAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_CustomInspectorName, (app::DynamicDataExportAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, ctor, (app::DynamicDataExportAttribute * this_ptr, int32_t id))
} // namespace app::classes::Moon::DynamicDataExportAttribute
