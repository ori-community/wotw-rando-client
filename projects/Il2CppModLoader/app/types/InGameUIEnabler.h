#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InGameUIEnabler {
        inline app::InGameUIEnabler__Class** type_info = (app::InGameUIEnabler__Class**)(modloader::win::memory::resolve_rva(0x0474E768));
        inline app::InGameUIEnabler__Class* get_class() {
            return il2cpp::get_class<app::InGameUIEnabler__Class>(type_info, "", "InGameUIEnabler");
        }
        inline app::InGameUIEnabler* create() {
            return il2cpp::create_object<app::InGameUIEnabler>(get_class());
        }
    } // namespace InGameUIEnabler
} // namespace app::classes::types
