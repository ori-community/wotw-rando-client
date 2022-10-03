#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DemoGUIMessage {
        namespace {
            app::DemoGUIMessage__Class* type_info_ref = nullptr;
        }
        app::DemoGUIMessage__Class** type_info = &type_info_ref;
        inline app::DemoGUIMessage__Class* get_class() {
            return il2cpp::get_class<app::DemoGUIMessage__Class>(type_info, "RootMotion", "DemoGUIMessage");
        }
        inline app::DemoGUIMessage* create() {
            return il2cpp::create_object<app::DemoGUIMessage>(get_class());
        }
    } // namespace DemoGUIMessage
} // namespace app::classes::types
