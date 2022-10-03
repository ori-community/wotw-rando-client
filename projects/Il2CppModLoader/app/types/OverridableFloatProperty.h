#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OverridableFloatProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OverridableFloatProperty__Class** type_info;
        inline app::OverridableFloatProperty__Class* get_class() {
            return il2cpp::get_class<app::OverridableFloatProperty__Class>(type_info, "", "OverridableFloatProperty");
        }
        inline app::OverridableFloatProperty* create() {
            return il2cpp::create_object<app::OverridableFloatProperty>(get_class());
        }
        inline app::OverridableFloatProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::OverridableFloatProperty__Array>(get_class(), size);
        }
    } // namespace OverridableFloatProperty
} // namespace app::classes::types
