#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OverridableColorProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OverridableColorProperty__Class** type_info;
        inline app::OverridableColorProperty__Class* get_class() {
            return il2cpp::get_class<app::OverridableColorProperty__Class>(type_info, "", "OverridableColorProperty");
        }
        inline app::OverridableColorProperty* create() {
            return il2cpp::create_object<app::OverridableColorProperty>(get_class());
        }
        inline app::OverridableColorProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::OverridableColorProperty__Array>(get_class(), size);
        }
        inline app::OverridableColorProperty__Array* create_array(const std::vector<app::OverridableColorProperty*>& items) {
            return il2cpp::array_new<app::OverridableColorProperty__Array>(get_class(), items);
        }
    } // namespace OverridableColorProperty
} // namespace app::classes::types
