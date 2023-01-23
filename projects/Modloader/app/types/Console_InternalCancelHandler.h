#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Console_InternalCancelHandler__Class.h>
#include <Modloader/app/structs/Console_InternalCancelHandler.h>

namespace app::classes::types {
    namespace Console_InternalCancelHandler {
        inline app::Console_InternalCancelHandler__Class** type_info = (app::Console_InternalCancelHandler__Class**)(modloader::win::memory::resolve_rva(0x04728230));
        inline app::Console_InternalCancelHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::Console_InternalCancelHandler__Class>(type_info, "System", "Console", "InternalCancelHandler");
        }
        inline app::Console_InternalCancelHandler* create() {
            return il2cpp::create_object<app::Console_InternalCancelHandler>(get_class());
        }
    } // namespace Console_InternalCancelHandler
} // namespace app::classes::types
