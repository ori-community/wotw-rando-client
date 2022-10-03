#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericDataContainer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericDataContainer__Class** type_info;
        inline app::GenericDataContainer__Class* get_class() {
            return il2cpp::get_class<app::GenericDataContainer__Class>(type_info, "", "GenericDataContainer");
        }
        inline app::GenericDataContainer* create() {
            return il2cpp::create_object<app::GenericDataContainer>(get_class());
        }
    } // namespace GenericDataContainer
} // namespace app::classes::types
