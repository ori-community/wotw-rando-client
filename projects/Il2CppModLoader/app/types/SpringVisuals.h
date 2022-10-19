#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpringVisuals {
        inline app::SpringVisuals__Class** type_info = (app::SpringVisuals__Class**)(modloader::win::memory::resolve_rva(0x04797A80));
        inline app::SpringVisuals__Class* get_class() {
            return il2cpp::get_class<app::SpringVisuals__Class>(type_info, "", "SpringVisuals");
        }
        inline app::SpringVisuals* create() {
            return il2cpp::create_object<app::SpringVisuals>(get_class());
        }
    } // namespace SpringVisuals
} // namespace app::classes::types
