#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskedTextProvider {
        inline app::MaskedTextProvider__Class** type_info = (app::MaskedTextProvider__Class**)(modloader::win::memory::resolve_rva(0x04770458));
        inline app::MaskedTextProvider__Class* get_class() {
            return il2cpp::get_class<app::MaskedTextProvider__Class>(type_info, "System.ComponentModel", "MaskedTextProvider");
        }
        inline app::MaskedTextProvider* create() {
            return il2cpp::create_object<app::MaskedTextProvider>(get_class());
        }
    } // namespace MaskedTextProvider
} // namespace app::classes::types
