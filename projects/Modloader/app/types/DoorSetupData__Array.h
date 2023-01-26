#pragma once
#include <Modloader/app/structs/DoorSetupData__Array.h>
#include <Modloader/app/structs/DoorSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoorSetupData__Array {
        inline app::DoorSetupData__Array__Class** type_info() {
            static app::DoorSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoorSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoorSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::DoorSetupData__Array__Class>(type_info(), "", "DoorSetupData[]");
        }
        inline app::DoorSetupData__Array* create() {
            return il2cpp::create_object<app::DoorSetupData__Array>(get_class());
        }
    } // namespace DoorSetupData__Array
} // namespace app::classes::types
