#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishBounceState {
        inline app::FishBounceState__Class** type_info = (app::FishBounceState__Class**)(modloader::win::memory::resolve_rva(0x047890F0));
        inline app::FishBounceState__Class* get_class() {
            return il2cpp::get_class<app::FishBounceState__Class>(type_info, "", "FishBounceState");
        }
        inline app::FishBounceState* create() {
            return il2cpp::create_object<app::FishBounceState>(get_class());
        }
    } // namespace FishBounceState
} // namespace app::classes::types
