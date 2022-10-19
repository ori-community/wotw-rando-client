#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvariantComparer {
        inline app::InvariantComparer__Class** type_info = (app::InvariantComparer__Class**)(modloader::win::memory::resolve_rva(0x0477CE98));
        inline app::InvariantComparer__Class* get_class() {
            return il2cpp::get_class<app::InvariantComparer__Class>(type_info, "System", "InvariantComparer");
        }
        inline app::InvariantComparer* create() {
            return il2cpp::create_object<app::InvariantComparer>(get_class());
        }
    } // namespace InvariantComparer
} // namespace app::classes::types
