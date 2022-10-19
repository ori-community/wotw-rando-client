#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceManagerBinder {
        inline app::TurbulenceManagerBinder__Class** type_info = (app::TurbulenceManagerBinder__Class**)(modloader::win::memory::resolve_rva(0x04752C40));
        inline app::TurbulenceManagerBinder__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceManagerBinder__Class>(type_info, "", "TurbulenceManagerBinder");
        }
        inline app::TurbulenceManagerBinder* create() {
            return il2cpp::create_object<app::TurbulenceManagerBinder>(get_class());
        }
    } // namespace TurbulenceManagerBinder
} // namespace app::classes::types
