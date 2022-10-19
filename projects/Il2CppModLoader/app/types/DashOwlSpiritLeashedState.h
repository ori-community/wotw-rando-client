#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlSpiritLeashedState {
        inline app::DashOwlSpiritLeashedState__Class** type_info = (app::DashOwlSpiritLeashedState__Class**)(modloader::win::memory::resolve_rva(0x04704B30));
        inline app::DashOwlSpiritLeashedState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlSpiritLeashedState__Class>(type_info, "", "DashOwlSpiritLeashedState");
        }
        inline app::DashOwlSpiritLeashedState* create() {
            return il2cpp::create_object<app::DashOwlSpiritLeashedState>(get_class());
        }
    } // namespace DashOwlSpiritLeashedState
} // namespace app::classes::types
