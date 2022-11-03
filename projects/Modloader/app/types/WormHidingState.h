#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WormHidingState {
        inline app::WormHidingState__Class** type_info = (app::WormHidingState__Class**)(modloader::win::memory::resolve_rva(0x04753728));
        inline app::WormHidingState__Class* get_class() {
            return il2cpp::get_class<app::WormHidingState__Class>(type_info, "", "WormHidingState");
        }
        inline app::WormHidingState* create() {
            return il2cpp::create_object<app::WormHidingState>(get_class());
        }
    } // namespace WormHidingState
} // namespace app::classes::types
