#pragma once
#include <Modloader/app/structs/IPlayFabLogger.h>
#include <Modloader/app/structs/IPlayFabLogger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlayFabLogger {
        inline app::IPlayFabLogger__Class** type_info() {
            static app::IPlayFabLogger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPlayFabLogger__Class**)(modloader::win::memory::resolve_rva(0x04752F10));
            }
            return cache;
        }
        inline app::IPlayFabLogger__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabLogger__Class>(type_info(), "PlayFab.Public", "IPlayFabLogger");
        }
    } // namespace IPlayFabLogger
} // namespace app::classes::types
