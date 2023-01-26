#pragma once
#include <Modloader/app/structs/ExtraEvent__Array.h>
#include <Modloader/app/structs/ExtraEvent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtraEvent__Array {
        inline app::ExtraEvent__Array__Class** type_info() {
            static app::ExtraEvent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExtraEvent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExtraEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::ExtraEvent__Array__Class>(type_info(), "PhysicsDebugTools", "ExtraEvent[]");
        }
        inline app::ExtraEvent__Array* create() {
            return il2cpp::create_object<app::ExtraEvent__Array>(get_class());
        }
    } // namespace ExtraEvent__Array
} // namespace app::classes::types
