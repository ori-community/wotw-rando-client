#pragma once
#include <Modloader/app/structs/ExpandableObjectConverter.h>
#include <Modloader/app/structs/ExpandableObjectConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpandableObjectConverter {
        inline app::ExpandableObjectConverter__Class** type_info() {
            static app::ExpandableObjectConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExpandableObjectConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExpandableObjectConverter__Class* get_class() {
            return il2cpp::get_class<app::ExpandableObjectConverter__Class>(type_info(), "System.ComponentModel", "ExpandableObjectConverter");
        }
        inline app::ExpandableObjectConverter* create() {
            return il2cpp::create_object<app::ExpandableObjectConverter>(get_class());
        }
    } // namespace ExpandableObjectConverter
} // namespace app::classes::types
