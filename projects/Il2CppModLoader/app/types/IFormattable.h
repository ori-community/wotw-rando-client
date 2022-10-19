#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFormattable {
        inline app::IFormattable__Class** type_info = (app::IFormattable__Class**)(modloader::win::memory::resolve_rva(0x04761DD0));
        inline app::IFormattable__Class* get_class() {
            return il2cpp::get_class<app::IFormattable__Class>(type_info, "System", "IFormattable");
        }
    } // namespace IFormattable
} // namespace app::classes::types
