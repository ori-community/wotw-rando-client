#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextBoxMessage_c {
        inline app::TextBoxMessage_c__Class** type_info = (app::TextBoxMessage_c__Class**)(modloader::win::memory::resolve_rva(0x0471E538));
        inline app::TextBoxMessage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxMessage_c__Class>(type_info, "", "TextBoxMessage", "<>c");
        }
        inline app::TextBoxMessage_c* create() {
            return il2cpp::create_object<app::TextBoxMessage_c>(get_class());
        }
    } // namespace TextBoxMessage_c
} // namespace app::classes::types
