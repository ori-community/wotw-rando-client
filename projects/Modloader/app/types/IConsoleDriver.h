#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IConsoleDriver__Class.h>

namespace app::classes::types {
    namespace IConsoleDriver {
        inline app::IConsoleDriver__Class** type_info = (app::IConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x047502D0));
        inline app::IConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::IConsoleDriver__Class>(type_info, "System", "IConsoleDriver");
        }
    } // namespace IConsoleDriver
} // namespace app::classes::types
