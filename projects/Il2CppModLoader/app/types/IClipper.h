#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IClipper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IClipper__Class** type_info;
        inline app::IClipper__Class* get_class() {
            return il2cpp::get_class<app::IClipper__Class>(type_info, "UnityEngine.UI", "IClipper");
        }
        inline app::IClipper* create() {
            return il2cpp::create_object<app::IClipper>(get_class());
        }
        inline app::IClipper__Array* create_array(int size) {
            return il2cpp::array_new<app::IClipper__Array>(get_class(), size);
        }
    } // namespace IClipper
} // namespace app::classes::types
