#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DtdParser {
        inline app::DtdParser__Class** type_info = (app::DtdParser__Class**)(modloader::win::memory::resolve_rva(0x04753B88));
        inline app::DtdParser__Class* get_class() {
            return il2cpp::get_class<app::DtdParser__Class>(type_info, "System.Xml", "DtdParser");
        }
        inline app::DtdParser* create() {
            return il2cpp::create_object<app::DtdParser>(get_class());
        }
    } // namespace DtdParser
} // namespace app::classes::types
