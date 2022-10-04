#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRng {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRng__Class** type_info;
        inline app::IRng__Class* get_class() {
            return il2cpp::get_class<app::IRng__Class>(type_info, "Moon", "IRng");
        }
    } // namespace IRng
} // namespace app::classes::types
