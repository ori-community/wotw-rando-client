#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringReader {
        inline app::StringReader__Class** type_info = (app::StringReader__Class**)(modloader::win::memory::resolve_rva(0x04720B88));
        inline app::StringReader__Class* get_class() {
            return il2cpp::get_class<app::StringReader__Class>(type_info, "System.IO", "StringReader");
        }
        inline app::StringReader* create() {
            return il2cpp::create_object<app::StringReader>(get_class());
        }
    } // namespace StringReader
} // namespace app::classes::types
