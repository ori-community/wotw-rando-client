#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartFlip {
        inline app::CartFlip__Class** type_info = (app::CartFlip__Class**)(modloader::win::memory::resolve_rva(0x04776568));
        inline app::CartFlip__Class* get_class() {
            return il2cpp::get_class<app::CartFlip__Class>(type_info, "", "CartFlip");
        }
        inline app::CartFlip* create() {
            return il2cpp::create_object<app::CartFlip>(get_class());
        }
    } // namespace CartFlip
} // namespace app::classes::types
