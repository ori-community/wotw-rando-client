#pragma once
#include <Modloader/app/structs/DoorSetupHolder.h>
#include <Modloader/app/structs/DoorSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoorSetupHolder {
        inline app::DoorSetupHolder__Class** type_info() {
            static app::DoorSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoorSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoorSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::DoorSetupHolder__Class>(type_info(), "", "DoorSetupHolder");
        }
        inline app::DoorSetupHolder* create() {
            return il2cpp::create_object<app::DoorSetupHolder>(get_class());
        }
    } // namespace DoorSetupHolder
} // namespace app::classes::types
