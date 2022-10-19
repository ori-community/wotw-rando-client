#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeAsciiDecoder {
        inline app::SafeAsciiDecoder__Class** type_info = (app::SafeAsciiDecoder__Class**)(modloader::win::memory::resolve_rva(0x04707560));
        inline app::SafeAsciiDecoder__Class* get_class() {
            return il2cpp::get_class<app::SafeAsciiDecoder__Class>(type_info, "System.Xml", "SafeAsciiDecoder");
        }
        inline app::SafeAsciiDecoder* create() {
            return il2cpp::create_object<app::SafeAsciiDecoder>(get_class());
        }
    } // namespace SafeAsciiDecoder
} // namespace app::classes::types
