#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InGameState {
        inline app::InGameState__Class** type_info = (app::InGameState__Class**)(modloader::win::memory::resolve_rva(0x04751BE0));
        inline app::InGameState__Class* get_class() {
            return il2cpp::get_class<app::InGameState__Class>(type_info, "", "InGameState");
        }
        inline app::InGameState* create() {
            return il2cpp::create_object<app::InGameState>(get_class());
        }
    } // namespace InGameState
} // namespace app::classes::types
