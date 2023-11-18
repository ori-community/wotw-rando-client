#pragma once
#include <Modloader/app/structs/IUtilityProvider__Array.h>
#include <Modloader/app/structs/IUtilityProvider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUtilityProvider__Array {
        inline app::IUtilityProvider__Array__Class** type_info() {
            static app::IUtilityProvider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IUtilityProvider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IUtilityProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IUtilityProvider__Array__Class>(type_info(), "Moon.BehaviourSystem", "IUtilityProvider[]");
        }
        inline app::IUtilityProvider__Array* create() {
            return il2cpp::create_object<app::IUtilityProvider__Array>(get_class());
        }
    } // namespace IUtilityProvider__Array
} // namespace app::classes::types
