#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IUpdateHandlerWithExecutionOrderOffset__Class.h>

namespace app::classes::types {
    namespace IUpdateHandlerWithExecutionOrderOffset {
        inline app::IUpdateHandlerWithExecutionOrderOffset__Class** type_info = (app::IUpdateHandlerWithExecutionOrderOffset__Class**)(modloader::win::memory::resolve_rva(0x04767F40));
        inline app::IUpdateHandlerWithExecutionOrderOffset__Class* get_class() {
            return il2cpp::get_class<app::IUpdateHandlerWithExecutionOrderOffset__Class>(type_info, "Moon", "IUpdateHandlerWithExecutionOrderOffset");
        }
    } // namespace IUpdateHandlerWithExecutionOrderOffset
} // namespace app::classes::types
