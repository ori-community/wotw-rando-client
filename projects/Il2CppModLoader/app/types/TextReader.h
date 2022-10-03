#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextReader__Class** type_info;
        inline app::TextReader__Class* get_class() {
            return il2cpp::get_class<app::TextReader__Class>(type_info, "System.IO", "TextReader");
        }
        inline app::TextReader* create() {
            return il2cpp::create_object<app::TextReader>(get_class());
        }
    } // namespace TextReader
} // namespace app::classes::types
