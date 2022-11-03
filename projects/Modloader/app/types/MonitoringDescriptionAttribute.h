#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonitoringDescriptionAttribute {
        namespace {
            inline app::MonitoringDescriptionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::MonitoringDescriptionAttribute__Class** type_info = &type_info_ref;
        inline app::MonitoringDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::MonitoringDescriptionAttribute__Class>(type_info, "System.Diagnostics", "MonitoringDescriptionAttribute");
        }
        inline app::MonitoringDescriptionAttribute* create() {
            return il2cpp::create_object<app::MonitoringDescriptionAttribute>(get_class());
        }
    } // namespace MonitoringDescriptionAttribute
} // namespace app::classes::types
