#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoreNodeWisps_LoreStep {
        namespace {
            inline app::LoreNodeWisps_LoreStep__Class* type_info_ref = nullptr;
        }
        inline app::LoreNodeWisps_LoreStep__Class** type_info = &type_info_ref;
        inline app::LoreNodeWisps_LoreStep__Class* get_class() {
            return il2cpp::get_nested_class<app::LoreNodeWisps_LoreStep__Class>(type_info, "", "LoreNodeWisps", "LoreStep");
        }
        inline app::LoreNodeWisps_LoreStep* create() {
            return il2cpp::create_object<app::LoreNodeWisps_LoreStep>(get_class());
        }
        inline app::LoreNodeWisps_LoreStep__Array* create_array(int size) {
            return il2cpp::array_new<app::LoreNodeWisps_LoreStep__Array>(get_class(), size);
        }
        inline app::LoreNodeWisps_LoreStep__Array* create_array(const std::vector<app::LoreNodeWisps_LoreStep*>& items) {
            return il2cpp::array_new<app::LoreNodeWisps_LoreStep__Array>(get_class(), items);
        }
    } // namespace LoreNodeWisps_LoreStep
} // namespace app::classes::types
