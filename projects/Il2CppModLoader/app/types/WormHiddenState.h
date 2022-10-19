#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WormHiddenState {
        inline app::WormHiddenState__Class** type_info = (app::WormHiddenState__Class**)(modloader::win::memory::resolve_rva(0x04759558));
        inline app::WormHiddenState__Class* get_class() {
            return il2cpp::get_class<app::WormHiddenState__Class>(type_info, "", "WormHiddenState");
        }
        inline app::WormHiddenState* create() {
            return il2cpp::create_object<app::WormHiddenState>(get_class());
        }
    } // namespace WormHiddenState
} // namespace app::classes::types
