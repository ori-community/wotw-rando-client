#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Utils_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Utils_1__Class** type_info;
        inline app::Utils_1__Class* get_class() {
            return il2cpp::get_class<app::Utils_1__Class>(type_info, "System.Linq.Expressions", "Utils");
        }
        inline app::Utils_1* create() {
            return il2cpp::create_object<app::Utils_1>(get_class());
        }
    } // namespace Utils_1
} // namespace app::classes::types
