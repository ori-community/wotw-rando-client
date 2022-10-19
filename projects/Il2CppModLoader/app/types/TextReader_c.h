#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextReader_c {
        inline app::TextReader_c__Class** type_info = (app::TextReader_c__Class**)(modloader::win::memory::resolve_rva(0x047989C0));
        inline app::TextReader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TextReader_c__Class>(type_info, "System.IO", "TextReader", "<>c");
        }
        inline app::TextReader_c* create() {
            return il2cpp::create_object<app::TextReader_c>(get_class());
        }
    } // namespace TextReader_c
} // namespace app::classes::types
