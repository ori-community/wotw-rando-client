#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ILogHandler__Class.h>

namespace app::classes::types {
    namespace ILogHandler {
        inline app::ILogHandler__Class** type_info = (app::ILogHandler__Class**)(modloader::win::memory::resolve_rva(0x04799910));
        inline app::ILogHandler__Class* get_class() {
            return il2cpp::get_class<app::ILogHandler__Class>(type_info, "UnityEngine", "ILogHandler");
        }
    } // namespace ILogHandler
} // namespace app::classes::types
