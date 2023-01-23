#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPlayFabLogger__Class.h>

namespace app::classes::types {
    namespace IPlayFabLogger {
        inline app::IPlayFabLogger__Class** type_info = (app::IPlayFabLogger__Class**)(modloader::win::memory::resolve_rva(0x04752F10));
        inline app::IPlayFabLogger__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabLogger__Class>(type_info, "PlayFab.Public", "IPlayFabLogger");
        }
    } // namespace IPlayFabLogger
} // namespace app::classes::types
