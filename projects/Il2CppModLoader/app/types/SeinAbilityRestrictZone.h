#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinAbilityRestrictZone__Class** type_info;
        inline app::SeinAbilityRestrictZone__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZone__Class>(type_info, "", "SeinAbilityRestrictZone");
        }
        inline app::SeinAbilityRestrictZone* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone>(get_class());
        }
        inline app::SeinAbilityRestrictZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinAbilityRestrictZone__Array>(get_class(), size);
        }
        inline app::SeinAbilityRestrictZone__Array* create_array(const std::vector<app::SeinAbilityRestrictZone*>& items) {
            return il2cpp::array_new<app::SeinAbilityRestrictZone__Array>(get_class(), items);
        }
    } // namespace SeinAbilityRestrictZone
} // namespace app::classes::types
