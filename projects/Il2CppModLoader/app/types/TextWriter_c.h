#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextWriter_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextWriter_c__Class** type_info;
        inline app::TextWriter_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TextWriter_c__Class>(type_info, "System.IO", "TextWriter", "<>c");
        }
        inline app::TextWriter_c* create() {
            return il2cpp::create_object<app::TextWriter_c>(get_class());
        }
    } // namespace TextWriter_c
} // namespace app::classes::types
