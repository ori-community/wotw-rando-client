#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Math {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Math__Class** type_info;
        inline app::Math__Class* get_class() {
            return il2cpp::get_class<app::Math__Class>(type_info, "System", "Math");
        }
        inline app::Math* create() {
            return il2cpp::create_object<app::Math>(get_class());
        }
    } // namespace Math
} // namespace app::classes::types
