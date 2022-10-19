#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexParser {
        inline app::RegexParser__Class** type_info = (app::RegexParser__Class**)(modloader::win::memory::resolve_rva(0x0476B290));
        inline app::RegexParser__Class* get_class() {
            return il2cpp::get_class<app::RegexParser__Class>(type_info, "System.Text.RegularExpressions", "RegexParser");
        }
        inline app::RegexParser* create() {
            return il2cpp::create_object<app::RegexParser>(get_class());
        }
    } // namespace RegexParser
} // namespace app::classes::types
