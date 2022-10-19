#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishFallState {
        inline app::FishFallState__Class** type_info = (app::FishFallState__Class**)(modloader::win::memory::resolve_rva(0x0476AFC0));
        inline app::FishFallState__Class* get_class() {
            return il2cpp::get_class<app::FishFallState__Class>(type_info, "", "FishFallState");
        }
        inline app::FishFallState* create() {
            return il2cpp::create_object<app::FishFallState>(get_class());
        }
    } // namespace FishFallState
} // namespace app::classes::types
