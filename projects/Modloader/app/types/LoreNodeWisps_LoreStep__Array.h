#pragma once
#include <Modloader/app/structs/LoreNodeWisps_LoreStep__Array.h>
#include <Modloader/app/structs/LoreNodeWisps_LoreStep__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoreNodeWisps_LoreStep__Array {
        inline app::LoreNodeWisps_LoreStep__Array__Class** type_info() {
            static app::LoreNodeWisps_LoreStep__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoreNodeWisps_LoreStep__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoreNodeWisps_LoreStep__Array__Class* get_class() {
            return il2cpp::get_class<app::LoreNodeWisps_LoreStep__Array__Class>(type_info(), "", "LoreNodeWisps+LoreStep[]");
        }
        inline app::LoreNodeWisps_LoreStep__Array* create() {
            return il2cpp::create_object<app::LoreNodeWisps_LoreStep__Array>(get_class());
        }
    } // namespace LoreNodeWisps_LoreStep__Array
} // namespace app::classes::types
