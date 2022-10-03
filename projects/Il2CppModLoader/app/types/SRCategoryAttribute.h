#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SRCategoryAttribute {
        namespace {
            app::SRCategoryAttribute__Class* type_info_ref = nullptr;
        }
        app::SRCategoryAttribute__Class** type_info = &type_info_ref;
        inline app::SRCategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::SRCategoryAttribute__Class>(type_info, "System.ComponentModel", "SRCategoryAttribute");
        }
        inline app::SRCategoryAttribute* create() {
            return il2cpp::create_object<app::SRCategoryAttribute>(get_class());
        }
    } // namespace SRCategoryAttribute
} // namespace app::classes::types
