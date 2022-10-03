#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorUsageAttribute {
        namespace {
            app::ColorUsageAttribute__Class* type_info_ref = nullptr;
        }
        app::ColorUsageAttribute__Class** type_info = &type_info_ref;
        inline app::ColorUsageAttribute__Class* get_class() {
            return il2cpp::get_class<app::ColorUsageAttribute__Class>(type_info, "UnityEngine", "ColorUsageAttribute");
        }
        inline app::ColorUsageAttribute* create() {
            return il2cpp::create_object<app::ColorUsageAttribute>(get_class());
        }
    } // namespace ColorUsageAttribute
} // namespace app::classes::types
