#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBrainController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBrainController__Class** type_info;
        inline app::IBrainController__Class* get_class() {
            return il2cpp::get_class<app::IBrainController__Class>(type_info, "Moon", "IBrainController");
        }
    } // namespace IBrainController
} // namespace app::classes::types
