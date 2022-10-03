#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateGeneric {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesiredUberStateGeneric__Class** type_info;
        inline app::DesiredUberStateGeneric__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateGeneric__Class>(type_info, "Moon", "DesiredUberStateGeneric");
        }
        inline app::DesiredUberStateGeneric* create() {
            return il2cpp::create_object<app::DesiredUberStateGeneric>(get_class());
        }
    } // namespace DesiredUberStateGeneric
} // namespace app::classes::types
