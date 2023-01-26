#pragma once
#include <Modloader/app/structs/TextBoxMessage_c_DisplayClass41_0.h>
#include <Modloader/app/structs/TextBoxMessage_c_DisplayClass41_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBoxMessage_c_DisplayClass41_0 {
        inline app::TextBoxMessage_c_DisplayClass41_0__Class** type_info() {
            static app::TextBoxMessage_c_DisplayClass41_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextBoxMessage_c_DisplayClass41_0__Class**)(modloader::win::memory::resolve_rva(0x04710648));
            }
            return cache;
        }
        inline app::TextBoxMessage_c_DisplayClass41_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxMessage_c_DisplayClass41_0__Class>(type_info(), "", "TextBoxMessage", "<>c__DisplayClass41_0");
        }
        inline app::TextBoxMessage_c_DisplayClass41_0* create() {
            return il2cpp::create_object<app::TextBoxMessage_c_DisplayClass41_0>(get_class());
        }
    } // namespace TextBoxMessage_c_DisplayClass41_0
} // namespace app::classes::types
