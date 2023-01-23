#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TryFaultHandler__Class.h>
#include <Modloader/app/structs/TryFaultHandler.h>

namespace app::classes::types {
    namespace TryFaultHandler {
        inline app::TryFaultHandler__Class** type_info = (app::TryFaultHandler__Class**)(modloader::win::memory::resolve_rva(0x0474CF60));
        inline app::TryFaultHandler__Class* get_class() {
            return il2cpp::get_class<app::TryFaultHandler__Class>(type_info, "System.Linq.Expressions.Interpreter", "TryFaultHandler");
        }
        inline app::TryFaultHandler* create() {
            return il2cpp::create_object<app::TryFaultHandler>(get_class());
        }
    } // namespace TryFaultHandler
} // namespace app::classes::types
