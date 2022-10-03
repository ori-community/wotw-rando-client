#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompatibilitySwitches {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompatibilitySwitches__Class** type_info;
        inline app::CompatibilitySwitches__Class* get_class() {
            return il2cpp::get_class<app::CompatibilitySwitches__Class>(type_info, "System", "CompatibilitySwitches");
        }
        inline app::CompatibilitySwitches* create() {
            return il2cpp::create_object<app::CompatibilitySwitches>(get_class());
        }
    } // namespace CompatibilitySwitches
} // namespace app::classes::types
