#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceStopState {
        inline app::RaceStopState__Class** type_info = (app::RaceStopState__Class**)(modloader::win::memory::resolve_rva(0x0476CF38));
        inline app::RaceStopState__Class* get_class() {
            return il2cpp::get_class<app::RaceStopState__Class>(type_info, "", "RaceStopState");
        }
        inline app::RaceStopState* create() {
            return il2cpp::create_object<app::RaceStopState>(get_class());
        }
    } // namespace RaceStopState
} // namespace app::classes::types
