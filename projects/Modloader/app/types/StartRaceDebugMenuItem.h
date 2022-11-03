#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StartRaceDebugMenuItem {
        inline app::StartRaceDebugMenuItem__Class** type_info = (app::StartRaceDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04784138));
        inline app::StartRaceDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::StartRaceDebugMenuItem__Class>(type_info, "", "StartRaceDebugMenuItem");
        }
        inline app::StartRaceDebugMenuItem* create() {
            return il2cpp::create_object<app::StartRaceDebugMenuItem>(get_class());
        }
    } // namespace StartRaceDebugMenuItem
} // namespace app::classes::types
