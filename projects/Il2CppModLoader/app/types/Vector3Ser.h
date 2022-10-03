#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector3Ser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vector3Ser__Class** type_info;
        inline app::Vector3Ser__Class* get_class() {
            return il2cpp::get_class<app::Vector3Ser__Class>(type_info, "", "Vector3Ser");
        }
        inline app::Vector3Ser* create() {
            return il2cpp::create_object<app::Vector3Ser>(get_class());
        }
        inline app::Vector3Ser__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector3Ser__Array>(get_class(), size);
        }
    } // namespace Vector3Ser
} // namespace app::classes::types
