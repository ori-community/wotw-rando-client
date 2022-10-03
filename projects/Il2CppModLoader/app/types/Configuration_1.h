#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Configuration_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Configuration_1__Class** type_info;
        inline app::Configuration_1__Class* get_class() {
            return il2cpp::get_class<app::Configuration_1__Class>(type_info, "TriangleNet", "Configuration");
        }
        inline app::Configuration_1* create() {
            return il2cpp::create_object<app::Configuration_1>(get_class());
        }
    } // namespace Configuration_1
} // namespace app::classes::types
