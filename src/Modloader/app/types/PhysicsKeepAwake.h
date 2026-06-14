#pragma once
#include <Modloader/app/structs/PhysicsKeepAwake.h>
#include <Modloader/app/structs/PhysicsKeepAwake__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsKeepAwake {
        inline app::PhysicsKeepAwake__Class** type_info() {
            static app::PhysicsKeepAwake__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsKeepAwake__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsKeepAwake__Class* get_class() {
            return il2cpp::get_class<app::PhysicsKeepAwake__Class>(type_info(), "", "PhysicsKeepAwake");
        }
        inline app::PhysicsKeepAwake* create() {
            return il2cpp::create_object<app::PhysicsKeepAwake>(get_class());
        }
    } // namespace PhysicsKeepAwake
} // namespace app::classes::types
