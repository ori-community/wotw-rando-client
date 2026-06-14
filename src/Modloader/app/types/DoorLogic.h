#pragma once
#include <Modloader/app/structs/DoorLogic.h>
#include <Modloader/app/structs/DoorLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoorLogic {
        inline app::DoorLogic__Class** type_info() {
            static app::DoorLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoorLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoorLogic__Class* get_class() {
            return il2cpp::get_class<app::DoorLogic__Class>(type_info(), "", "DoorLogic");
        }
        inline app::DoorLogic* create() {
            return il2cpp::create_object<app::DoorLogic>(get_class());
        }
    } // namespace DoorLogic
} // namespace app::classes::types
