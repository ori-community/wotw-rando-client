#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonGetAbilityPedestal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonGetAbilityPedestal__Class** type_info;
        inline app::MoonGetAbilityPedestal__Class* get_class() {
            return il2cpp::get_class<app::MoonGetAbilityPedestal__Class>(type_info, "", "MoonGetAbilityPedestal");
        }
        inline app::MoonGetAbilityPedestal* create() {
            return il2cpp::create_object<app::MoonGetAbilityPedestal>(get_class());
        }
        inline app::MoonGetAbilityPedestal__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonGetAbilityPedestal__Array>(get_class(), size);
        }
        inline app::MoonGetAbilityPedestal__Array* create_array(const std::vector<app::MoonGetAbilityPedestal*>& items) {
            return il2cpp::array_new<app::MoonGetAbilityPedestal__Array>(get_class(), items);
        }
    } // namespace MoonGetAbilityPedestal
} // namespace app::classes::types
