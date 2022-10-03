#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialVFXSizePair {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialVFXSizePair__Class** type_info;
        inline app::MaterialVFXSizePair__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXSizePair__Class>(type_info, "", "MaterialVFXSizePair");
        }
        inline app::MaterialVFXSizePair* create() {
            return il2cpp::create_object<app::MaterialVFXSizePair>(get_class());
        }
        inline app::MaterialVFXSizePair__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialVFXSizePair__Array>(get_class(), size);
        }
    } // namespace MaterialVFXSizePair
} // namespace app::classes::types
