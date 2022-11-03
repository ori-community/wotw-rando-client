#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Application_ControllerStateChanged {
        namespace {
            inline app::Application_ControllerStateChanged__Class* type_info_ref = nullptr;
        }
        inline app::Application_ControllerStateChanged__Class** type_info = &type_info_ref;
        inline app::Application_ControllerStateChanged__Class* get_class() {
            return il2cpp::get_nested_class<app::Application_ControllerStateChanged__Class>(type_info, "UnityEngine", "Application", "ControllerStateChanged");
        }
        inline app::Application_ControllerStateChanged* create() {
            return il2cpp::create_object<app::Application_ControllerStateChanged>(get_class());
        }
    } // namespace Application_ControllerStateChanged
} // namespace app::classes::types
