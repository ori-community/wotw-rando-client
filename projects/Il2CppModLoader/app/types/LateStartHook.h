#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LateStartHook {
        inline app::LateStartHook__Class** type_info = (app::LateStartHook__Class**)(modloader::win::memory::resolve_rva(0x04762460));
        inline app::LateStartHook__Class* get_class() {
            return il2cpp::get_class<app::LateStartHook__Class>(type_info, "", "LateStartHook");
        }
        inline app::LateStartHook* create() {
            return il2cpp::create_object<app::LateStartHook>(get_class());
        }
    } // namespace LateStartHook
} // namespace app::classes::types
