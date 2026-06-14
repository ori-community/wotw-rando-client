#pragma once
#include <Modloader/app/structs/FloatZone__Array.h>
#include <Modloader/app/structs/FloatZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatZone__Array {
        inline app::FloatZone__Array__Class** type_info() {
            static app::FloatZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatZone__Array__Class>(type_info(), "", "FloatZone[]");
        }
        inline app::FloatZone__Array* create() {
            return il2cpp::create_object<app::FloatZone__Array>(get_class());
        }
    } // namespace FloatZone__Array
} // namespace app::classes::types
