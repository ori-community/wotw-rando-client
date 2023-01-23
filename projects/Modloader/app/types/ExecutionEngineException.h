#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExecutionEngineException__Class.h>
#include <Modloader/app/structs/ExecutionEngineException.h>

namespace app::classes::types {
    namespace ExecutionEngineException {
        inline app::ExecutionEngineException__Class** type_info = (app::ExecutionEngineException__Class**)(modloader::win::memory::resolve_rva(0x04780310));
        inline app::ExecutionEngineException__Class* get_class() {
            return il2cpp::get_class<app::ExecutionEngineException__Class>(type_info, "System", "ExecutionEngineException");
        }
        inline app::ExecutionEngineException* create() {
            return il2cpp::create_object<app::ExecutionEngineException>(get_class());
        }
    } // namespace ExecutionEngineException
} // namespace app::classes::types
