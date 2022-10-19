#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnCollisionEnter {
        inline app::OnCollisionEnter__Class** type_info = (app::OnCollisionEnter__Class**)(modloader::win::memory::resolve_rva(0x04786E30));
        inline app::OnCollisionEnter__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionEnter__Class>(type_info, "fsm.triggers", "OnCollisionEnter");
        }
        inline app::OnCollisionEnter* create() {
            return il2cpp::create_object<app::OnCollisionEnter>(get_class());
        }
    } // namespace OnCollisionEnter
} // namespace app::classes::types
