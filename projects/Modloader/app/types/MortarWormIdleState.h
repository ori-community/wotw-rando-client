#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarWormIdleState {
        inline app::MortarWormIdleState__Class** type_info = (app::MortarWormIdleState__Class**)(modloader::win::memory::resolve_rva(0x047095C0));
        inline app::MortarWormIdleState__Class* get_class() {
            return il2cpp::get_class<app::MortarWormIdleState__Class>(type_info, "", "MortarWormIdleState");
        }
        inline app::MortarWormIdleState* create() {
            return il2cpp::create_object<app::MortarWormIdleState>(get_class());
        }
    } // namespace MortarWormIdleState
} // namespace app::classes::types
