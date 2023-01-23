#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DemoGUIMessage__Class.h>
#include <Modloader/app/structs/DemoGUIMessage.h>

namespace app::classes::types {
    namespace DemoGUIMessage {
        namespace {
            inline app::DemoGUIMessage__Class* type_info_ref = nullptr;
        }
        inline app::DemoGUIMessage__Class** type_info = &type_info_ref;
        inline app::DemoGUIMessage__Class* get_class() {
            return il2cpp::get_class<app::DemoGUIMessage__Class>(type_info, "RootMotion", "DemoGUIMessage");
        }
        inline app::DemoGUIMessage* create() {
            return il2cpp::create_object<app::DemoGUIMessage>(get_class());
        }
    } // namespace DemoGUIMessage
} // namespace app::classes::types
