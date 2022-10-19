#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NintendoPlayFabSynchronizer {
        inline app::NintendoPlayFabSynchronizer__Class** type_info = (app::NintendoPlayFabSynchronizer__Class**)(modloader::win::memory::resolve_rva(0x04773A18));
        inline app::NintendoPlayFabSynchronizer__Class* get_class() {
            return il2cpp::get_class<app::NintendoPlayFabSynchronizer__Class>(type_info, "SystemIntegration", "NintendoPlayFabSynchronizer");
        }
        inline app::NintendoPlayFabSynchronizer* create() {
            return il2cpp::create_object<app::NintendoPlayFabSynchronizer>(get_class());
        }
    } // namespace NintendoPlayFabSynchronizer
} // namespace app::classes::types
