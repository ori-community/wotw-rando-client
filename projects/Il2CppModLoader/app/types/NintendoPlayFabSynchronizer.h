#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoPlayFabSynchronizer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NintendoPlayFabSynchronizer__Class** type_info;
        inline app::NintendoPlayFabSynchronizer__Class* get_class() {
            return il2cpp::get_class<app::NintendoPlayFabSynchronizer__Class>(type_info, "SystemIntegration", "NintendoPlayFabSynchronizer");
        }
        inline app::NintendoPlayFabSynchronizer* create() {
            return il2cpp::create_object<app::NintendoPlayFabSynchronizer>(get_class());
        }
    } // namespace NintendoPlayFabSynchronizer
} // namespace app::classes::types
