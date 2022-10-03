#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpShootShark_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumpShootShark_States__Class** type_info;
        inline app::JumpShootShark_States__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpShootShark_States__Class>(type_info, "", "JumpShootShark", "States");
        }
        inline app::JumpShootShark_States* create() {
            return il2cpp::create_object<app::JumpShootShark_States>(get_class());
        }
    } // namespace JumpShootShark_States
} // namespace app::classes::types
