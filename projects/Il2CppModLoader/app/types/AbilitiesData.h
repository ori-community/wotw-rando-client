#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbilitiesData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AbilitiesData__Class** type_info;
        inline app::AbilitiesData__Class* get_class() {
            return il2cpp::get_class<app::AbilitiesData__Class>(type_info, "", "AbilitiesData");
        }
        inline app::AbilitiesData* create() {
            return il2cpp::create_object<app::AbilitiesData>(get_class());
        }
        inline app::AbilitiesData__Array* create_array(int size) {
            return il2cpp::array_new<app::AbilitiesData__Array>(get_class(), size);
        }
        inline app::AbilitiesData__Array* create_array(const std::vector<app::AbilitiesData*>& items) {
            return il2cpp::array_new<app::AbilitiesData__Array>(get_class(), items);
        }
    } // namespace AbilitiesData
} // namespace app::classes::types
