#pragma once
#include <Modloader/app/structs/DebugLogHandler.h>
#include <Modloader/app/structs/DebugLogHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugLogHandler {
        inline app::DebugLogHandler__Class** type_info() {
            static app::DebugLogHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugLogHandler__Class**)(modloader::win::memory::resolve_rva(0x04735700));
            }
            return cache;
        }
        inline app::DebugLogHandler__Class* get_class() {
            return il2cpp::get_class<app::DebugLogHandler__Class>(type_info(), "UnityEngine", "DebugLogHandler");
        }
        inline app::DebugLogHandler* create() {
            return il2cpp::create_object<app::DebugLogHandler>(get_class());
        }
    } // namespace DebugLogHandler
} // namespace app::classes::types
