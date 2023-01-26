#pragma once
#include <Modloader/app/structs/DebugLogger.h>
#include <Modloader/app/structs/DebugLogger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugLogger {
        inline app::DebugLogger__Class** type_info() {
            static app::DebugLogger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugLogger__Class**)(modloader::win::memory::resolve_rva(0x0478B4D0));
            }
            return cache;
        }
        inline app::DebugLogger__Class* get_class() {
            return il2cpp::get_class<app::DebugLogger__Class>(type_info(), "PlayFab.Logger", "DebugLogger");
        }
        inline app::DebugLogger* create() {
            return il2cpp::create_object<app::DebugLogger>(get_class());
        }
    } // namespace DebugLogger
} // namespace app::classes::types
