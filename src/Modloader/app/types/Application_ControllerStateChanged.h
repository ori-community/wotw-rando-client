#pragma once
#include <Modloader/app/structs/Application_ControllerStateChanged.h>
#include <Modloader/app/structs/Application_ControllerStateChanged__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Application_ControllerStateChanged {
        inline app::Application_ControllerStateChanged__Class** type_info() {
            static app::Application_ControllerStateChanged__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Application_ControllerStateChanged__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Application_ControllerStateChanged__Class* get_class() {
            return il2cpp::get_nested_class<app::Application_ControllerStateChanged__Class>(type_info(), "UnityEngine", "Application", "ControllerStateChanged");
        }
        inline app::Application_ControllerStateChanged* create() {
            return il2cpp::create_object<app::Application_ControllerStateChanged>(get_class());
        }
    } // namespace Application_ControllerStateChanged
} // namespace app::classes::types
