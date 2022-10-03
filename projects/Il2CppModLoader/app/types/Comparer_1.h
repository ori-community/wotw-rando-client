#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Comparer_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Comparer_1__Class** type_info;
        inline app::Comparer_1__Class* get_class() {
            return il2cpp::get_class<app::Comparer_1__Class>(type_info, "System.Net", "Comparer");
        }
        inline app::Comparer_1* create() {
            return il2cpp::create_object<app::Comparer_1>(get_class());
        }
    } // namespace Comparer_1
} // namespace app::classes::types
