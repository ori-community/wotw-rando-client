#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonType__Class** type_info;
        inline app::IMoonType__Class* get_class() {
            return il2cpp::get_class<app::IMoonType__Class>(type_info, "Moon", "IMoonType");
        }
    } // namespace IMoonType
} // namespace app::classes::types
