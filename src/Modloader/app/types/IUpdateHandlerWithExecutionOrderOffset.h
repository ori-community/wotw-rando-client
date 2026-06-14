#pragma once
#include <Modloader/app/structs/IUpdateHandlerWithExecutionOrderOffset.h>
#include <Modloader/app/structs/IUpdateHandlerWithExecutionOrderOffset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUpdateHandlerWithExecutionOrderOffset {
        inline app::IUpdateHandlerWithExecutionOrderOffset__Class** type_info() {
            static app::IUpdateHandlerWithExecutionOrderOffset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUpdateHandlerWithExecutionOrderOffset__Class**)(modloader::win::memory::resolve_rva(0x04767F40));
            }
            return cache;
        }
        inline app::IUpdateHandlerWithExecutionOrderOffset__Class* get_class() {
            return il2cpp::get_class<app::IUpdateHandlerWithExecutionOrderOffset__Class>(type_info(), "Moon", "IUpdateHandlerWithExecutionOrderOffset");
        }
    } // namespace IUpdateHandlerWithExecutionOrderOffset
} // namespace app::classes::types
