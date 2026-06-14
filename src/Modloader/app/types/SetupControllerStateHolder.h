#pragma once
#include <Modloader/app/structs/SetupControllerStateHolder.h>
#include <Modloader/app/structs/SetupControllerStateHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupControllerStateHolder {
        inline app::SetupControllerStateHolder__Class** type_info() {
            static app::SetupControllerStateHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetupControllerStateHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetupControllerStateHolder__Class* get_class() {
            return il2cpp::get_class<app::SetupControllerStateHolder__Class>(type_info(), "", "SetupControllerStateHolder");
        }
        inline app::SetupControllerStateHolder* create() {
            return il2cpp::create_object<app::SetupControllerStateHolder>(get_class());
        }
    } // namespace SetupControllerStateHolder
} // namespace app::classes::types
