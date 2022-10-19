#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WormEmergingState {
        inline app::WormEmergingState__Class** type_info = (app::WormEmergingState__Class**)(modloader::win::memory::resolve_rva(0x0470CCF0));
        inline app::WormEmergingState__Class* get_class() {
            return il2cpp::get_class<app::WormEmergingState__Class>(type_info, "", "WormEmergingState");
        }
        inline app::WormEmergingState* create() {
            return il2cpp::create_object<app::WormEmergingState>(get_class());
        }
    } // namespace WormEmergingState
} // namespace app::classes::types
