#pragma once
#include <Modloader/app/structs/PhysicalSystemManager__Array.h>
#include <Modloader/app/structs/PhysicalSystemManager__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemManager__Array {
        inline app::PhysicalSystemManager__Array__Class** type_info() {
            static app::PhysicalSystemManager__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicalSystemManager__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicalSystemManager__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemManager__Array__Class>(type_info(), "", "PhysicalSystemManager[]");
        }
        inline app::PhysicalSystemManager__Array* create() {
            return il2cpp::create_object<app::PhysicalSystemManager__Array>(get_class());
        }
    } // namespace PhysicalSystemManager__Array
} // namespace app::classes::types
