#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDtdParser {
        inline app::IDtdParser__Class** type_info = (app::IDtdParser__Class**)(modloader::win::memory::resolve_rva(0x04733480));
        inline app::IDtdParser__Class* get_class() {
            return il2cpp::get_class<app::IDtdParser__Class>(type_info, "System.Xml", "IDtdParser");
        }
    } // namespace IDtdParser
} // namespace app::classes::types
