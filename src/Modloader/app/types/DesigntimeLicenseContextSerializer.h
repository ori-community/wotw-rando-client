#pragma once
#include <Modloader/app/structs/DesigntimeLicenseContextSerializer.h>
#include <Modloader/app/structs/DesigntimeLicenseContextSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesigntimeLicenseContextSerializer {
        inline app::DesigntimeLicenseContextSerializer__Class** type_info() {
            static app::DesigntimeLicenseContextSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesigntimeLicenseContextSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesigntimeLicenseContextSerializer__Class* get_class() {
            return il2cpp::get_class<app::DesigntimeLicenseContextSerializer__Class>(type_info(), "System.ComponentModel.Design", "DesigntimeLicenseContextSerializer");
        }
        inline app::DesigntimeLicenseContextSerializer* create() {
            return il2cpp::create_object<app::DesigntimeLicenseContextSerializer>(get_class());
        }
    } // namespace DesigntimeLicenseContextSerializer
} // namespace app::classes::types
