#pragma once
#include <Modloader/app/structs/Elevator.h>
#include <Modloader/app/structs/Elevator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Elevator {
        inline app::Elevator__Class** type_info() {
            static app::Elevator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Elevator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Elevator__Class* get_class() {
            return il2cpp::get_class<app::Elevator__Class>(type_info(), "", "Elevator");
        }
        inline app::Elevator* create() {
            return il2cpp::create_object<app::Elevator>(get_class());
        }
    } // namespace Elevator
} // namespace app::classes::types
