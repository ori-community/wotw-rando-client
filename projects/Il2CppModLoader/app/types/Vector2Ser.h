#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector2Ser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vector2Ser__Class** type_info;
        inline app::Vector2Ser__Class* get_class() {
            return il2cpp::get_class<app::Vector2Ser__Class>(type_info, "", "Vector2Ser");
        }
        inline app::Vector2Ser* create() {
            return il2cpp::create_object<app::Vector2Ser>(get_class());
        }
        inline app::Vector2Ser__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector2Ser__Array>(get_class(), size);
        }
    } // namespace Vector2Ser
} // namespace app::classes::types
