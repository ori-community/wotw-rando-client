#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Punycode {
        inline app::Punycode__Class** type_info = (app::Punycode__Class**)(modloader::win::memory::resolve_rva(0x04730158));
        inline app::Punycode__Class* get_class() {
            return il2cpp::get_class<app::Punycode__Class>(type_info, "System.Globalization", "Punycode");
        }
        inline app::Punycode* create() {
            return il2cpp::create_object<app::Punycode>(get_class());
        }
    } // namespace Punycode
} // namespace app::classes::types
