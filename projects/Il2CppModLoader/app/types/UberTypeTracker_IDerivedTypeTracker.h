#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberTypeTracker_IDerivedTypeTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberTypeTracker_IDerivedTypeTracker__Class** type_info;
        inline app::UberTypeTracker_IDerivedTypeTracker__Class* get_class() {
            return il2cpp::get_nested_class<app::UberTypeTracker_IDerivedTypeTracker__Class>(type_info, "", "UberTypeTracker", "IDerivedTypeTracker");
        }
        inline app::UberTypeTracker_IDerivedTypeTracker* create() {
            return il2cpp::create_object<app::UberTypeTracker_IDerivedTypeTracker>(get_class());
        }
        inline app::UberTypeTracker_IDerivedTypeTracker__Array* create_array(int size) {
            return il2cpp::array_new<app::UberTypeTracker_IDerivedTypeTracker__Array>(get_class(), size);
        }
    } // namespace UberTypeTracker_IDerivedTypeTracker
} // namespace app::classes::types
