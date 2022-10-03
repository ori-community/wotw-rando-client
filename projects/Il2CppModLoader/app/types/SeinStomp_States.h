#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinStomp_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinStomp_States__Class** type_info;
        inline app::SeinStomp_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinStomp_States__Class>(type_info, "", "SeinStomp", "States");
        }
        inline app::SeinStomp_States* create() {
            return il2cpp::create_object<app::SeinStomp_States>(get_class());
        }
    } // namespace SeinStomp_States
} // namespace app::classes::types
