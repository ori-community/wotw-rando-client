#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeySizes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeySizes__Class** type_info;
        inline app::KeySizes__Class* get_class() {
            return il2cpp::get_class<app::KeySizes__Class>(type_info, "System.Security.Cryptography", "KeySizes");
        }
        inline app::KeySizes* create() {
            return il2cpp::create_object<app::KeySizes>(get_class());
        }
        inline app::KeySizes__Array* create_array(int size) {
            return il2cpp::array_new<app::KeySizes__Array>(get_class(), size);
        }
        inline app::KeySizes__Array* create_array(const std::vector<app::KeySizes*>& items) {
            return il2cpp::array_new<app::KeySizes__Array>(get_class(), items);
        }
    } // namespace KeySizes
} // namespace app::classes::types
