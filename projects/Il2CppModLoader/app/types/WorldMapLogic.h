#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldMapLogic {
        inline app::WorldMapLogic__Class** type_info = (app::WorldMapLogic__Class**)(modloader::win::memory::resolve_rva(0x04781140));
        inline app::WorldMapLogic__Class* get_class() {
            return il2cpp::get_class<app::WorldMapLogic__Class>(type_info, "", "WorldMapLogic");
        }
        inline app::WorldMapLogic* create() {
            return il2cpp::create_object<app::WorldMapLogic>(get_class());
        }
    } // namespace WorldMapLogic
} // namespace app::classes::types
