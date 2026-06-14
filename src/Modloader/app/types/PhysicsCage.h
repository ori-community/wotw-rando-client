#pragma once
#include <Modloader/app/structs/PhysicsCage.h>
#include <Modloader/app/structs/PhysicsCage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsCage {
        inline app::PhysicsCage__Class** type_info() {
            static app::PhysicsCage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsCage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsCage__Class* get_class() {
            return il2cpp::get_class<app::PhysicsCage__Class>(type_info(), "", "PhysicsCage");
        }
        inline app::PhysicsCage* create() {
            return il2cpp::create_object<app::PhysicsCage>(get_class());
        }
    } // namespace PhysicsCage
} // namespace app::classes::types
