#pragma once
#include <Modloader/app/structs/GridObject__Array.h>
#include <Modloader/app/structs/GridObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GridObject__Array {
        inline app::GridObject__Array__Class** type_info() {
            static app::GridObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GridObject__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GridObject__Array__Class* get_class() {
            return il2cpp::get_class<app::GridObject__Array__Class>(type_info(), "", "GridObject[]");
        }
        inline app::GridObject__Array* create() {
            return il2cpp::create_object<app::GridObject__Array>(get_class());
        }
    } // namespace GridObject__Array
} // namespace app::classes::types
