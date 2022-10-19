#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
