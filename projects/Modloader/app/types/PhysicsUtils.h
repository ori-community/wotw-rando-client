#pragma once
#include <Modloader/app/structs/PhysicsUtils.h>
#include <Modloader/app/structs/PhysicsUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsUtils {
        inline app::PhysicsUtils__Class** type_info() {
            static app::PhysicsUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsUtils__Class**)(modloader::win::memory::resolve_rva(0x04793708));
            }
            return cache;
        }
        inline app::PhysicsUtils__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUtils__Class>(type_info(), "", "PhysicsUtils");
        }
        inline app::PhysicsUtils* create() {
            return il2cpp::create_object<app::PhysicsUtils>(get_class());
        }
    } // namespace PhysicsUtils
} // namespace app::classes::types
