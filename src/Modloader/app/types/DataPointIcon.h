#pragma once
#include <Modloader/app/structs/DataPointIcon.h>
#include <Modloader/app/structs/DataPointIcon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataPointIcon {
        inline app::DataPointIcon__Class** type_info() {
            static app::DataPointIcon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataPointIcon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataPointIcon__Class* get_class() {
            return il2cpp::get_class<app::DataPointIcon__Class>(type_info(), "Moon.Telemetry", "DataPointIcon");
        }
        inline app::DataPointIcon* create() {
            return il2cpp::create_object<app::DataPointIcon>(get_class());
        }
    } // namespace DataPointIcon
} // namespace app::classes::types
