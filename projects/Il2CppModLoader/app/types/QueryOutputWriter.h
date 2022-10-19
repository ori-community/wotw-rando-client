#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QueryOutputWriter {
        inline app::QueryOutputWriter__Class** type_info = (app::QueryOutputWriter__Class**)(modloader::win::memory::resolve_rva(0x0472CAF8));
        inline app::QueryOutputWriter__Class* get_class() {
            return il2cpp::get_class<app::QueryOutputWriter__Class>(type_info, "System.Xml", "QueryOutputWriter");
        }
        inline app::QueryOutputWriter* create() {
            return il2cpp::create_object<app::QueryOutputWriter>(get_class());
        }
    } // namespace QueryOutputWriter
} // namespace app::classes::types
