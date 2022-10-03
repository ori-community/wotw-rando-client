#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Configuration_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Configuration_c__Class** type_info;
        inline app::Configuration_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Configuration_c__Class>(type_info, "TriangleNet", "Configuration", "<>c");
        }
        inline app::Configuration_c* create() {
            return il2cpp::create_object<app::Configuration_c>(get_class());
        }
    } // namespace Configuration_c
} // namespace app::classes::types
