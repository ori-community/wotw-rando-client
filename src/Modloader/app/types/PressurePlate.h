#pragma once
#include <Modloader/app/structs/PressurePlate.h>
#include <Modloader/app/structs/PressurePlate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PressurePlate {
        inline app::PressurePlate__Class** type_info() {
            static app::PressurePlate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PressurePlate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PressurePlate__Class* get_class() {
            return il2cpp::get_class<app::PressurePlate__Class>(type_info(), "", "PressurePlate");
        }
        inline app::PressurePlate* create() {
            return il2cpp::create_object<app::PressurePlate>(get_class());
        }
    } // namespace PressurePlate
} // namespace app::classes::types
