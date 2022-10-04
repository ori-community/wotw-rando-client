#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUpdateWhileDisabled {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUpdateWhileDisabled__Class** type_info;
        inline app::IUpdateWhileDisabled__Class* get_class() {
            return il2cpp::get_class<app::IUpdateWhileDisabled__Class>(type_info, "Moon", "IUpdateWhileDisabled");
        }
    } // namespace IUpdateWhileDisabled
} // namespace app::classes::types
