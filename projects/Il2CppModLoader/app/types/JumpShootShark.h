#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpShootShark {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumpShootShark__Class** type_info;
        inline app::JumpShootShark__Class* get_class() {
            return il2cpp::get_class<app::JumpShootShark__Class>(type_info, "", "JumpShootShark");
        }
        inline app::JumpShootShark* create() {
            return il2cpp::create_object<app::JumpShootShark>(get_class());
        }
        inline app::JumpShootShark__Array* create_array(int size) {
            return il2cpp::array_new<app::JumpShootShark__Array>(get_class(), size);
        }
        inline app::JumpShootShark__Array* create_array(const std::vector<app::JumpShootShark*>& items) {
            return il2cpp::array_new<app::JumpShootShark__Array>(get_class(), items);
        }
    } // namespace JumpShootShark
} // namespace app::classes::types
