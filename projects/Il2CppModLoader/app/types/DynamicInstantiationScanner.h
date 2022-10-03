#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationScanner__Class** type_info;
        inline app::DynamicInstantiationScanner__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationScanner__Class>(type_info, "", "DynamicInstantiationScanner");
        }
        inline app::DynamicInstantiationScanner* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner>(get_class());
        }
    } // namespace DynamicInstantiationScanner
} // namespace app::classes::types
