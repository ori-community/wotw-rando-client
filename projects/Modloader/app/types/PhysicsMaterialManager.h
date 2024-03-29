#pragma once
#include <Modloader/app/structs/PhysicsMaterialManager.h>
#include <Modloader/app/structs/PhysicsMaterialManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsMaterialManager {
        inline app::PhysicsMaterialManager__Class** type_info() {
            static app::PhysicsMaterialManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsMaterialManager__Class**)(modloader::win::memory::resolve_rva(0x0473B3B0));
            }
            return cache;
        }
        inline app::PhysicsMaterialManager__Class* get_class() {
            return il2cpp::get_class<app::PhysicsMaterialManager__Class>(type_info(), "", "PhysicsMaterialManager");
        }
        inline app::PhysicsMaterialManager* create() {
            return il2cpp::create_object<app::PhysicsMaterialManager>(get_class());
        }
    } // namespace PhysicsMaterialManager
} // namespace app::classes::types
