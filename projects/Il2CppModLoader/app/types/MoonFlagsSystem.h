#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonFlagsSystem {
        inline app::MoonFlagsSystem__Class** type_info = (app::MoonFlagsSystem__Class**)(modloader::win::memory::resolve_rva(0x04749F00));
        inline app::MoonFlagsSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonFlagsSystem__Class>(type_info, "", "MoonFlagsSystem");
        }
        inline app::MoonFlagsSystem* create() {
            return il2cpp::create_object<app::MoonFlagsSystem>(get_class());
        }
    } // namespace MoonFlagsSystem
} // namespace app::classes::types
