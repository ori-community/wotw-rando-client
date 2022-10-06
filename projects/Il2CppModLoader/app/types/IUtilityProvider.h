#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUtilityProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUtilityProvider__Class** type_info;
        inline app::IUtilityProvider__Class* get_class() {
            return il2cpp::get_class<app::IUtilityProvider__Class>(type_info, "Moon.BehaviourSystem", "IUtilityProvider");
        }
        inline app::IUtilityProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::IUtilityProvider__Array>(get_class(), size);
        }
        inline app::IUtilityProvider__Array* create_array(const std::vector<app::IUtilityProvider*>& items) {
            return il2cpp::array_new<app::IUtilityProvider__Array>(get_class(), items);
        }
    } // namespace IUtilityProvider
} // namespace app::classes::types
