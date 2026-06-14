#pragma once
#include <Modloader/app/structs/LoreNodeWisps_LoreStep.h>
#include <Modloader/app/structs/LoreNodeWisps_LoreStep__Array.h>
#include <Modloader/app/structs/LoreNodeWisps_LoreStep__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoreNodeWisps_LoreStep {
        inline app::LoreNodeWisps_LoreStep__Class** type_info() {
            static app::LoreNodeWisps_LoreStep__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoreNodeWisps_LoreStep__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoreNodeWisps_LoreStep__Class* get_class() {
            return il2cpp::get_nested_class<app::LoreNodeWisps_LoreStep__Class>(type_info(), "", "LoreNodeWisps", "LoreStep");
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
