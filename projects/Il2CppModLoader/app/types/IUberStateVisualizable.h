#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberStateVisualizable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberStateVisualizable__Class** type_info;
        inline app::IUberStateVisualizable__Class* get_class() {
            return il2cpp::get_class<app::IUberStateVisualizable__Class>(type_info, "Moon", "IUberStateVisualizable");
        }
    } // namespace IUberStateVisualizable
} // namespace app::classes::types
