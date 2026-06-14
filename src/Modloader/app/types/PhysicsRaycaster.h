#pragma once
#include <Modloader/app/structs/PhysicsRaycaster.h>
#include <Modloader/app/structs/PhysicsRaycaster__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsRaycaster {
        inline app::PhysicsRaycaster__Class** type_info() {
            static app::PhysicsRaycaster__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsRaycaster__Class**)(modloader::win::memory::resolve_rva(0x0471A688));
            }
            return cache;
        }
        inline app::PhysicsRaycaster__Class* get_class() {
            return il2cpp::get_class<app::PhysicsRaycaster__Class>(type_info(), "UnityEngine.EventSystems", "PhysicsRaycaster");
        }
        inline app::PhysicsRaycaster* create() {
            return il2cpp::create_object<app::PhysicsRaycaster>(get_class());
        }
    } // namespace PhysicsRaycaster
} // namespace app::classes::types
