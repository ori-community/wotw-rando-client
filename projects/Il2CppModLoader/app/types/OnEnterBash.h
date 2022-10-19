#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnEnterBash {
        inline app::OnEnterBash__Class** type_info = (app::OnEnterBash__Class**)(modloader::win::memory::resolve_rva(0x04794F38));
        inline app::OnEnterBash__Class* get_class() {
            return il2cpp::get_class<app::OnEnterBash__Class>(type_info, "fsm.triggers", "OnEnterBash");
        }
        inline app::OnEnterBash* create() {
            return il2cpp::create_object<app::OnEnterBash>(get_class());
        }
    } // namespace OnEnterBash
} // namespace app::classes::types
