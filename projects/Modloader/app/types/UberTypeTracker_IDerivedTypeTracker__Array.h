#pragma once
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker__Array.h>
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberTypeTracker_IDerivedTypeTracker__Array {
        inline app::UberTypeTracker_IDerivedTypeTracker__Array__Class** type_info() {
            static app::UberTypeTracker_IDerivedTypeTracker__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberTypeTracker_IDerivedTypeTracker__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberTypeTracker_IDerivedTypeTracker__Array__Class* get_class() {
            return il2cpp::get_class<app::UberTypeTracker_IDerivedTypeTracker__Array__Class>(type_info(), "", "UberTypeTracker+IDerivedTypeTracker[]");
        }
        inline app::UberTypeTracker_IDerivedTypeTracker__Array* create() {
            return il2cpp::create_object<app::UberTypeTracker_IDerivedTypeTracker__Array>(get_class());
        }
    } // namespace UberTypeTracker_IDerivedTypeTracker__Array
} // namespace app::classes::types
