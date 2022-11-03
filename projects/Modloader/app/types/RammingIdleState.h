#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RammingIdleState {
        inline app::RammingIdleState__Class** type_info = (app::RammingIdleState__Class**)(modloader::win::memory::resolve_rva(0x0478E618));
        inline app::RammingIdleState__Class* get_class() {
            return il2cpp::get_class<app::RammingIdleState__Class>(type_info, "", "RammingIdleState");
        }
        inline app::RammingIdleState* create() {
            return il2cpp::create_object<app::RammingIdleState>(get_class());
        }
    } // namespace RammingIdleState
} // namespace app::classes::types
