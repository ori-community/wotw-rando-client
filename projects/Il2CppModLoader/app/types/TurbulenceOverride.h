#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceOverride {
        inline app::TurbulenceOverride__Class** type_info = (app::TurbulenceOverride__Class**)(modloader::win::memory::resolve_rva(0x04781598));
        inline app::TurbulenceOverride__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceOverride__Class>(type_info, "", "TurbulenceOverride");
        }
        inline app::TurbulenceOverride* create() {
            return il2cpp::create_object<app::TurbulenceOverride>(get_class());
        }
    } // namespace TurbulenceOverride
} // namespace app::classes::types
