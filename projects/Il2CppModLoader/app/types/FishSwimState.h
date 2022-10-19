#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishSwimState {
        inline app::FishSwimState__Class** type_info = (app::FishSwimState__Class**)(modloader::win::memory::resolve_rva(0x04756D38));
        inline app::FishSwimState__Class* get_class() {
            return il2cpp::get_class<app::FishSwimState__Class>(type_info, "", "FishSwimState");
        }
        inline app::FishSwimState* create() {
            return il2cpp::create_object<app::FishSwimState>(get_class());
        }
    } // namespace FishSwimState
} // namespace app::classes::types
