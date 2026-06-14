#pragma once
#include <Modloader/app/structs/Console_WindowsConsole_WindowsCancelHandler.h>
#include <Modloader/app/structs/Console_WindowsConsole_WindowsCancelHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Console_WindowsConsole_WindowsCancelHandler {
        inline app::Console_WindowsConsole_WindowsCancelHandler__Class** type_info() {
            static app::Console_WindowsConsole_WindowsCancelHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Console_WindowsConsole_WindowsCancelHandler__Class**)(modloader::win::memory::resolve_rva(0x0477E220));
            }
            return cache;
        }
        inline app::Console_WindowsConsole_WindowsCancelHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::Console_WindowsConsole_WindowsCancelHandler__Class>(type_info(), "System", "Console+WindowsConsole", "WindowsCancelHandler");
        }
        inline app::Console_WindowsConsole_WindowsCancelHandler* create() {
            return il2cpp::create_object<app::Console_WindowsConsole_WindowsCancelHandler>(get_class());
        }
    } // namespace Console_WindowsConsole_WindowsCancelHandler
} // namespace app::classes::types
