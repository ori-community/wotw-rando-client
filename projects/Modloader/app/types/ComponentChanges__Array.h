#pragma once
#include <Modloader/app/structs/ComponentChanges__Array.h>
#include <Modloader/app/structs/ComponentChanges__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComponentChanges__Array {
        inline app::ComponentChanges__Array__Class** type_info() {
            static app::ComponentChanges__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComponentChanges__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComponentChanges__Array__Class* get_class() {
            return il2cpp::get_class<app::ComponentChanges__Array__Class>(type_info(), "Moon.ReviewFramework", "ComponentChanges[]");
        }
        inline app::ComponentChanges__Array* create() {
            return il2cpp::create_object<app::ComponentChanges__Array>(get_class());
        }
    } // namespace ComponentChanges__Array
} // namespace app::classes::types
