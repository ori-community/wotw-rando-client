#pragma once
#include <Modloader/app/structs/PhysicsUtils_c.h>
#include <Modloader/app/structs/PhysicsUtils_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsUtils_c {
        inline app::PhysicsUtils_c__Class** type_info() {
            static app::PhysicsUtils_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsUtils_c__Class**)(modloader::win::memory::resolve_rva(0x04709120));
            }
            return cache;
        }
        inline app::PhysicsUtils_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsUtils_c__Class>(type_info(), "", "PhysicsUtils", "<>c");
        }
        inline app::PhysicsUtils_c* create() {
            return il2cpp::create_object<app::PhysicsUtils_c>(get_class());
        }
    } // namespace PhysicsUtils_c
} // namespace app::classes::types
