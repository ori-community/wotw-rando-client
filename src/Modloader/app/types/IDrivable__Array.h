#pragma once
#include <Modloader/app/structs/IDrivable__Array.h>
#include <Modloader/app/structs/IDrivable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDrivable__Array {
        inline app::IDrivable__Array__Class** type_info() {
            static app::IDrivable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDrivable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDrivable__Array__Class* get_class() {
            return il2cpp::get_class<app::IDrivable__Array__Class>(type_info(), "Moon", "IDrivable[]");
        }
        inline app::IDrivable__Array* create() {
            return il2cpp::create_object<app::IDrivable__Array>(get_class());
        }
    } // namespace IDrivable__Array
} // namespace app::classes::types
