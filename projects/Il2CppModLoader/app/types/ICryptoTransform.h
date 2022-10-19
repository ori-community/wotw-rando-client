#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICryptoTransform {
        inline app::ICryptoTransform__Class** type_info = (app::ICryptoTransform__Class**)(modloader::win::memory::resolve_rva(0x0476FA58));
        inline app::ICryptoTransform__Class* get_class() {
            return il2cpp::get_class<app::ICryptoTransform__Class>(type_info, "System.Security.Cryptography", "ICryptoTransform");
        }
    } // namespace ICryptoTransform
} // namespace app::classes::types
