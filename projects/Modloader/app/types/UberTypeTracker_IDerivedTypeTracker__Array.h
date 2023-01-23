#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker__Array__Class.h>
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker__Array.h>

namespace app::classes::types {
    namespace UberTypeTracker_IDerivedTypeTracker__Array {
        namespace {
            inline app::UberTypeTracker_IDerivedTypeTracker__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberTypeTracker_IDerivedTypeTracker__Array__Class** type_info = &type_info_ref;
        inline app::UberTypeTracker_IDerivedTypeTracker__Array__Class* get_class() {
            return il2cpp::get_class<app::UberTypeTracker_IDerivedTypeTracker__Array__Class>(type_info, "", "UberTypeTracker+IDerivedTypeTracker[]");
        }
        inline app::UberTypeTracker_IDerivedTypeTracker__Array* create() {
            return il2cpp::create_object<app::UberTypeTracker_IDerivedTypeTracker__Array>(get_class());
        }
    } // namespace UberTypeTracker_IDerivedTypeTracker__Array
} // namespace app::classes::types
