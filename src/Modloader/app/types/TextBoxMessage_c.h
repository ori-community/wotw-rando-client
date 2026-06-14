#pragma once
#include <Modloader/app/structs/TextBoxMessage_c.h>
#include <Modloader/app/structs/TextBoxMessage_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBoxMessage_c {
        inline app::TextBoxMessage_c__Class** type_info() {
            static app::TextBoxMessage_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextBoxMessage_c__Class**)(modloader::win::memory::resolve_rva(0x0471E538));
            }
            return cache;
        }
        inline app::TextBoxMessage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxMessage_c__Class>(type_info(), "", "TextBoxMessage", "<>c");
        }
        inline app::TextBoxMessage_c* create() {
            return il2cpp::create_object<app::TextBoxMessage_c>(get_class());
        }
    } // namespace TextBoxMessage_c
} // namespace app::classes::types
