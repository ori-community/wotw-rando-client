#pragma once
#include <Modloader/app/structs/BuildData__Array.h>
#include <Modloader/app/structs/BuildData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuildData__Array {
        inline app::BuildData__Array__Class** type_info() {
            static app::BuildData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuildData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuildData__Array__Class* get_class() {
            return il2cpp::get_class<app::BuildData__Array__Class>(type_info(), "", "BuildData[]");
        }
        inline app::BuildData__Array* create() {
            return il2cpp::create_object<app::BuildData__Array>(get_class());
        }
    } // namespace BuildData__Array
} // namespace app::classes::types
