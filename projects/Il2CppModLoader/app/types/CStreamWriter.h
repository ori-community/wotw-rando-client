#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CStreamWriter {
        inline app::CStreamWriter__Class** type_info = (app::CStreamWriter__Class**)(modloader::win::memory::resolve_rva(0x047345B8));
        inline app::CStreamWriter__Class* get_class() {
            return il2cpp::get_class<app::CStreamWriter__Class>(type_info, "System.IO", "CStreamWriter");
        }
        inline app::CStreamWriter* create() {
            return il2cpp::create_object<app::CStreamWriter>(get_class());
        }
    } // namespace CStreamWriter
} // namespace app::classes::types
