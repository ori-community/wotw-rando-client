#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RammingBrakingState {
        inline app::RammingBrakingState__Class** type_info = (app::RammingBrakingState__Class**)(modloader::win::memory::resolve_rva(0x0473A580));
        inline app::RammingBrakingState__Class* get_class() {
            return il2cpp::get_class<app::RammingBrakingState__Class>(type_info, "", "RammingBrakingState");
        }
        inline app::RammingBrakingState* create() {
            return il2cpp::create_object<app::RammingBrakingState>(get_class());
        }
    } // namespace RammingBrakingState
} // namespace app::classes::types
