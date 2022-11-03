#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexCharClass {
        inline app::RegexCharClass__Class** type_info = (app::RegexCharClass__Class**)(modloader::win::memory::resolve_rva(0x047968B8));
        inline app::RegexCharClass__Class* get_class() {
            return il2cpp::get_class<app::RegexCharClass__Class>(type_info, "System.Text.RegularExpressions", "RegexCharClass");
        }
        inline app::RegexCharClass* create() {
            return il2cpp::create_object<app::RegexCharClass>(get_class());
        }
    } // namespace RegexCharClass
} // namespace app::classes::types
