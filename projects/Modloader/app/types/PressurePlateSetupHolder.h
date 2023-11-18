#pragma once
#include <Modloader/app/structs/PressurePlateSetupHolder.h>
#include <Modloader/app/structs/PressurePlateSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PressurePlateSetupHolder {
        inline app::PressurePlateSetupHolder__Class** type_info() {
            static app::PressurePlateSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PressurePlateSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PressurePlateSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::PressurePlateSetupHolder__Class>(type_info(), "", "PressurePlateSetupHolder");
        }
        inline app::PressurePlateSetupHolder* create() {
            return il2cpp::create_object<app::PressurePlateSetupHolder>(get_class());
        }
    } // namespace PressurePlateSetupHolder
} // namespace app::classes::types
