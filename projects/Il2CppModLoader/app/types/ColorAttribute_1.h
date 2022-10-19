#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorAttribute_1 {
        namespace {
            inline app::ColorAttribute_1__Class* type_info_ref = nullptr;
        }
        inline app::ColorAttribute_1__Class** type_info = &type_info_ref;
        inline app::ColorAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::ColorAttribute_1__Class>(type_info, "Moon.ExposedPropertiesInspector", "ColorAttribute");
        }
        inline app::ColorAttribute_1* create() {
            return il2cpp::create_object<app::ColorAttribute_1>(get_class());
        }
    } // namespace ColorAttribute_1
} // namespace app::classes::types
