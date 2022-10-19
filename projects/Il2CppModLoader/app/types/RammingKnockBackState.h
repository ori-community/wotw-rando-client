#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RammingKnockBackState {
        inline app::RammingKnockBackState__Class** type_info = (app::RammingKnockBackState__Class**)(modloader::win::memory::resolve_rva(0x04745240));
        inline app::RammingKnockBackState__Class* get_class() {
            return il2cpp::get_class<app::RammingKnockBackState__Class>(type_info, "", "RammingKnockBackState");
        }
        inline app::RammingKnockBackState* create() {
            return il2cpp::create_object<app::RammingKnockBackState>(get_class());
        }
    } // namespace RammingKnockBackState
} // namespace app::classes::types
