#pragma once
#include <Modloader/app/structs/LegacyPressurePlate.h>
#include <Modloader/app/structs/LegacyPressurePlate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyPressurePlate {
        inline app::LegacyPressurePlate__Class** type_info() {
            static app::LegacyPressurePlate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyPressurePlate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyPressurePlate__Class* get_class() {
            return il2cpp::get_class<app::LegacyPressurePlate__Class>(type_info(), "", "LegacyPressurePlate");
        }
        inline app::LegacyPressurePlate* create() {
            return il2cpp::create_object<app::LegacyPressurePlate>(get_class());
        }
    } // namespace LegacyPressurePlate
} // namespace app::classes::types
