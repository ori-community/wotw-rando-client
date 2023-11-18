#pragma once
#include <Modloader/app/structs/IDrivableGroup__Array.h>
#include <Modloader/app/structs/IDrivableGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDrivableGroup__Array {
        inline app::IDrivableGroup__Array__Class** type_info() {
            static app::IDrivableGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDrivableGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDrivableGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::IDrivableGroup__Array__Class>(type_info(), "Moon", "IDrivableGroup[]");
        }
        inline app::IDrivableGroup__Array* create() {
            return il2cpp::create_object<app::IDrivableGroup__Array>(get_class());
        }
    } // namespace IDrivableGroup__Array
} // namespace app::classes::types
