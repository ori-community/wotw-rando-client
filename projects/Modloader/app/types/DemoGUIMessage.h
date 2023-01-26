#pragma once
#include <Modloader/app/structs/DemoGUIMessage.h>
#include <Modloader/app/structs/DemoGUIMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DemoGUIMessage {
        inline app::DemoGUIMessage__Class** type_info() {
            static app::DemoGUIMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DemoGUIMessage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DemoGUIMessage__Class* get_class() {
            return il2cpp::get_class<app::DemoGUIMessage__Class>(type_info(), "RootMotion", "DemoGUIMessage");
        }
        inline app::DemoGUIMessage* create() {
            return il2cpp::create_object<app::DemoGUIMessage>(get_class());
        }
    } // namespace DemoGUIMessage
} // namespace app::classes::types
