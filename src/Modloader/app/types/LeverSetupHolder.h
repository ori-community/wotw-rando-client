#pragma once
#include <Modloader/app/structs/LeverSetupHolder.h>
#include <Modloader/app/structs/LeverSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeverSetupHolder {
        inline app::LeverSetupHolder__Class** type_info() {
            static app::LeverSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeverSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeverSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::LeverSetupHolder__Class>(type_info(), "", "LeverSetupHolder");
        }
        inline app::LeverSetupHolder* create() {
            return il2cpp::create_object<app::LeverSetupHolder>(get_class());
        }
    } // namespace LeverSetupHolder
} // namespace app::classes::types
