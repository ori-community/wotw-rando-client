#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HideFlagsExtensions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HideFlagsExtensions__Class** type_info;
        inline app::HideFlagsExtensions__Class* get_class() {
            return il2cpp::get_class<app::HideFlagsExtensions__Class>(type_info, "", "HideFlagsExtensions");
        }
        inline app::HideFlagsExtensions* create() {
            return il2cpp::create_object<app::HideFlagsExtensions>(get_class());
        }
    } // namespace HideFlagsExtensions
} // namespace app::classes::types
