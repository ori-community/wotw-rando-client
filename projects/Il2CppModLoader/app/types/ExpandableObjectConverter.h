#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandableObjectConverter {
        namespace {
            app::ExpandableObjectConverter__Class* type_info_ref = nullptr;
        }
        app::ExpandableObjectConverter__Class** type_info = &type_info_ref;
        inline app::ExpandableObjectConverter__Class* get_class() {
            return il2cpp::get_class<app::ExpandableObjectConverter__Class>(type_info, "System.ComponentModel", "ExpandableObjectConverter");
        }
        inline app::ExpandableObjectConverter* create() {
            return il2cpp::create_object<app::ExpandableObjectConverter>(get_class());
        }
    } // namespace ExpandableObjectConverter
} // namespace app::classes::types
