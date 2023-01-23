#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextBoxMessage_States__Class.h>
#include <Modloader/app/structs/TextBoxMessage_States.h>

namespace app::classes::types {
    namespace TextBoxMessage_States {
        inline app::TextBoxMessage_States__Class** type_info = (app::TextBoxMessage_States__Class**)(modloader::win::memory::resolve_rva(0x0475E468));
        inline app::TextBoxMessage_States__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxMessage_States__Class>(type_info, "", "TextBoxMessage", "States");
        }
        inline app::TextBoxMessage_States* create() {
            return il2cpp::create_object<app::TextBoxMessage_States>(get_class());
        }
    } // namespace TextBoxMessage_States
} // namespace app::classes::types
