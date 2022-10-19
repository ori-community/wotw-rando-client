#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RammingBehaviour_KnockbackState {
        inline app::RammingBehaviour_KnockbackState__Class** type_info = (app::RammingBehaviour_KnockbackState__Class**)(modloader::win::memory::resolve_rva(0x0471E660));
        inline app::RammingBehaviour_KnockbackState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_KnockbackState__Class>(type_info, "Moon", "RammingBehaviour", "KnockbackState");
        }
        inline app::RammingBehaviour_KnockbackState* create() {
            return il2cpp::create_object<app::RammingBehaviour_KnockbackState>(get_class());
        }
    } // namespace RammingBehaviour_KnockbackState
} // namespace app::classes::types
