#pragma once
#include <Modloader/app/structs/IConsoleDriver.h>
#include <Modloader/app/structs/IConsoleDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IConsoleDriver {
        inline app::IConsoleDriver__Class** type_info() {
            static app::IConsoleDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x047502D0));
            }
            return cache;
        }
        inline app::IConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::IConsoleDriver__Class>(type_info(), "System", "IConsoleDriver");
        }
    } // namespace IConsoleDriver
} // namespace app::classes::types
