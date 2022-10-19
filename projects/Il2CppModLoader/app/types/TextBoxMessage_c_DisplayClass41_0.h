#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextBoxMessage_c_DisplayClass41_0 {
        inline app::TextBoxMessage_c_DisplayClass41_0__Class** type_info = (app::TextBoxMessage_c_DisplayClass41_0__Class**)(modloader::win::memory::resolve_rva(0x04710648));
        inline app::TextBoxMessage_c_DisplayClass41_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxMessage_c_DisplayClass41_0__Class>(type_info, "", "TextBoxMessage", "<>c__DisplayClass41_0");
        }
        inline app::TextBoxMessage_c_DisplayClass41_0* create() {
            return il2cpp::create_object<app::TextBoxMessage_c_DisplayClass41_0>(get_class());
        }
    } // namespace TextBoxMessage_c_DisplayClass41_0
} // namespace app::classes::types
