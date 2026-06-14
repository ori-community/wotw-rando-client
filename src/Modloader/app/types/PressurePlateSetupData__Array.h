#pragma once
#include <Modloader/app/structs/PressurePlateSetupData__Array.h>
#include <Modloader/app/structs/PressurePlateSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PressurePlateSetupData__Array {
        inline app::PressurePlateSetupData__Array__Class** type_info() {
            static app::PressurePlateSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PressurePlateSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PressurePlateSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::PressurePlateSetupData__Array__Class>(type_info(), "", "PressurePlateSetupData[]");
        }
        inline app::PressurePlateSetupData__Array* create() {
            return il2cpp::create_object<app::PressurePlateSetupData__Array>(get_class());
        }
    } // namespace PressurePlateSetupData__Array
} // namespace app::classes::types
