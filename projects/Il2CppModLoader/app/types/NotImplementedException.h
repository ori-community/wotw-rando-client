#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotImplementedException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotImplementedException__Class** type_info;
        inline app::NotImplementedException__Class* get_class() {
            return il2cpp::get_class<app::NotImplementedException__Class>(type_info, "System", "NotImplementedException");
        }
        inline app::NotImplementedException* create() {
            return il2cpp::create_object<app::NotImplementedException>(get_class());
        }
    } // namespace NotImplementedException
} // namespace app::classes::types
