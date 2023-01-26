#pragma once
#include <Modloader/app/structs/MonitoringDescriptionAttribute.h>
#include <Modloader/app/structs/MonitoringDescriptionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonitoringDescriptionAttribute {
        inline app::MonitoringDescriptionAttribute__Class** type_info() {
            static app::MonitoringDescriptionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonitoringDescriptionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonitoringDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::MonitoringDescriptionAttribute__Class>(type_info(), "System.Diagnostics", "MonitoringDescriptionAttribute");
        }
        inline app::MonitoringDescriptionAttribute* create() {
            return il2cpp::create_object<app::MonitoringDescriptionAttribute>(get_class());
        }
    } // namespace MonitoringDescriptionAttribute
} // namespace app::classes::types
