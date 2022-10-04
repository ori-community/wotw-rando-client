#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILaunchable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILaunchable__Class** type_info;
        inline app::ILaunchable__Class* get_class() {
            return il2cpp::get_class<app::ILaunchable__Class>(type_info, "Moon", "ILaunchable");
        }
        inline app::ILaunchable* create() {
            return il2cpp::create_object<app::ILaunchable>(get_class());
        }
    } // namespace ILaunchable
} // namespace app::classes::types
