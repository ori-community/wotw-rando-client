#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFormatterConverter {
        inline app::IFormatterConverter__Class** type_info = (app::IFormatterConverter__Class**)(modloader::win::memory::resolve_rva(0x04745480));
        inline app::IFormatterConverter__Class* get_class() {
            return il2cpp::get_class<app::IFormatterConverter__Class>(type_info, "System.Runtime.Serialization", "IFormatterConverter");
        }
    } // namespace IFormatterConverter
} // namespace app::classes::types
