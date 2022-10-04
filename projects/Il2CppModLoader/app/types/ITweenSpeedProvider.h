#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITweenSpeedProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITweenSpeedProvider__Class** type_info;
        inline app::ITweenSpeedProvider__Class* get_class() {
            return il2cpp::get_class<app::ITweenSpeedProvider__Class>(type_info, "Moon", "ITweenSpeedProvider");
        }
    } // namespace ITweenSpeedProvider
} // namespace app::classes::types
