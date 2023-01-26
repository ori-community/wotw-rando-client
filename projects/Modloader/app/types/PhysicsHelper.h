#pragma once
#include <Modloader/app/structs/PhysicsHelper.h>
#include <Modloader/app/structs/PhysicsHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsHelper {
        inline app::PhysicsHelper__Class** type_info() {
            static app::PhysicsHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsHelper__Class**)(modloader::win::memory::resolve_rva(0x04726968));
            }
            return cache;
        }
        inline app::PhysicsHelper__Class* get_class() {
            return il2cpp::get_class<app::PhysicsHelper__Class>(type_info(), "", "PhysicsHelper");
        }
        inline app::PhysicsHelper* create() {
            return il2cpp::create_object<app::PhysicsHelper>(get_class());
        }
    } // namespace PhysicsHelper
} // namespace app::classes::types
