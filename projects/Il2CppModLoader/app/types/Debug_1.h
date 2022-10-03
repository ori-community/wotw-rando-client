#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Debug_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Debug_1__Class** type_info;
        inline app::Debug_1__Class* get_class() {
            return il2cpp::get_class<app::Debug_1__Class>(type_info, "UnityEngine", "Debug");
        }
        inline app::Debug_1* create() {
            return il2cpp::create_object<app::Debug_1>(get_class());
        }
    } // namespace Debug_1
} // namespace app::classes::types
