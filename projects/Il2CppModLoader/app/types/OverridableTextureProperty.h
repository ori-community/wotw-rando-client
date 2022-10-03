#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OverridableTextureProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OverridableTextureProperty__Class** type_info;
        inline app::OverridableTextureProperty__Class* get_class() {
            return il2cpp::get_class<app::OverridableTextureProperty__Class>(type_info, "", "OverridableTextureProperty");
        }
        inline app::OverridableTextureProperty* create() {
            return il2cpp::create_object<app::OverridableTextureProperty>(get_class());
        }
        inline app::OverridableTextureProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::OverridableTextureProperty__Array>(get_class(), size);
        }
    } // namespace OverridableTextureProperty
} // namespace app::classes::types
