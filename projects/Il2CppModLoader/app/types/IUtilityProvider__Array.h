#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUtilityProvider__Array {
        namespace {
            inline app::IUtilityProvider__Array__Class* type_info_ref = nullptr;
        }
        inline app::IUtilityProvider__Array__Class** type_info = &type_info_ref;
        inline app::IUtilityProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IUtilityProvider__Array__Class>(type_info, "Moon.BehaviourSystem", "IUtilityProvider[]");
        }
        inline app::IUtilityProvider__Array* create() {
            return il2cpp::create_object<app::IUtilityProvider__Array>(get_class());
        }
    } // namespace IUtilityProvider__Array
} // namespace app::classes::types
