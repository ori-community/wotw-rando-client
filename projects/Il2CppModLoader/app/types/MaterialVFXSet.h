#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialVFXSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialVFXSet__Class** type_info;
        inline app::MaterialVFXSet__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXSet__Class>(type_info, "", "MaterialVFXSet");
        }
        inline app::MaterialVFXSet* create() {
            return il2cpp::create_object<app::MaterialVFXSet>(get_class());
        }
        inline app::MaterialVFXSet__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialVFXSet__Array>(get_class(), size);
        }
    } // namespace MaterialVFXSet
} // namespace app::classes::types
