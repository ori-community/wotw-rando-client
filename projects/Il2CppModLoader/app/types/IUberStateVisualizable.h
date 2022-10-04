#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberStateVisualizable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberStateVisualizable__Class** type_info;
        inline app::IUberStateVisualizable__Class* get_class() {
            return il2cpp::get_class<app::IUberStateVisualizable__Class>(type_info, "Moon", "IUberStateVisualizable");
        }
        inline app::IUberStateVisualizable* create() {
            return il2cpp::create_object<app::IUberStateVisualizable>(get_class());
        }
    } // namespace IUberStateVisualizable
} // namespace app::classes::types
