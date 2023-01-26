#pragma once
#include <Modloader/app/structs/ILogger.h>
#include <Modloader/app/structs/ILogger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILogger {
        inline app::ILogger__Class** type_info() {
            static app::ILogger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILogger__Class**)(modloader::win::memory::resolve_rva(0x04714318));
            }
            return cache;
        }
        inline app::ILogger__Class* get_class() {
            return il2cpp::get_class<app::ILogger__Class>(type_info(), "UnityEngine", "ILogger");
        }
    } // namespace ILogger
} // namespace app::classes::types
