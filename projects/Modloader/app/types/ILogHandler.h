#pragma once
#include <Modloader/app/structs/ILogHandler.h>
#include <Modloader/app/structs/ILogHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILogHandler {
        inline app::ILogHandler__Class** type_info() {
            static app::ILogHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILogHandler__Class**)(modloader::win::memory::resolve_rva(0x04799910));
            }
            return cache;
        }
        inline app::ILogHandler__Class* get_class() {
            return il2cpp::get_class<app::ILogHandler__Class>(type_info(), "UnityEngine", "ILogHandler");
        }
    } // namespace ILogHandler
} // namespace app::classes::types
