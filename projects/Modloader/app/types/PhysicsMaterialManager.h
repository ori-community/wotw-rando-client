#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsMaterialManager {
        inline app::PhysicsMaterialManager__Class** type_info = (app::PhysicsMaterialManager__Class**)(modloader::win::memory::resolve_rva(0x0473B3B0));
        inline app::PhysicsMaterialManager__Class* get_class() {
            return il2cpp::get_class<app::PhysicsMaterialManager__Class>(type_info, "", "PhysicsMaterialManager");
        }
        inline app::PhysicsMaterialManager* create() {
            return il2cpp::create_object<app::PhysicsMaterialManager>(get_class());
        }
    } // namespace PhysicsMaterialManager
} // namespace app::classes::types
