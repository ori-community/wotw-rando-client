#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILeachable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILeachable__Class** type_info;
        inline app::ILeachable__Class* get_class() {
            return il2cpp::get_class<app::ILeachable__Class>(type_info, "", "ILeachable");
        }
        inline app::ILeachable* create() {
            return il2cpp::create_object<app::ILeachable>(get_class());
        }
    } // namespace ILeachable
} // namespace app::classes::types
