#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCarry_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinCarry_States__Class** type_info;
        inline app::SeinCarry_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCarry_States__Class>(type_info, "", "SeinCarry", "States");
        }
        inline app::SeinCarry_States* create() {
            return il2cpp::create_object<app::SeinCarry_States>(get_class());
        }
    } // namespace SeinCarry_States
} // namespace app::classes::types
