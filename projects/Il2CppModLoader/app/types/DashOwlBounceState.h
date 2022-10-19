#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlBounceState {
        inline app::DashOwlBounceState__Class** type_info = (app::DashOwlBounceState__Class**)(modloader::win::memory::resolve_rva(0x04723580));
        inline app::DashOwlBounceState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlBounceState__Class>(type_info, "", "DashOwlBounceState");
        }
        inline app::DashOwlBounceState* create() {
            return il2cpp::create_object<app::DashOwlBounceState>(get_class());
        }
    } // namespace DashOwlBounceState
} // namespace app::classes::types
