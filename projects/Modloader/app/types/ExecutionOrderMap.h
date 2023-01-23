#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExecutionOrderMap__Class.h>
#include <Modloader/app/structs/ExecutionOrderMap.h>

namespace app::classes::types {
    namespace ExecutionOrderMap {
        inline app::ExecutionOrderMap__Class** type_info = (app::ExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x04774530));
        inline app::ExecutionOrderMap__Class* get_class() {
            return il2cpp::get_class<app::ExecutionOrderMap__Class>(type_info, "Moon", "ExecutionOrderMap");
        }
        inline app::ExecutionOrderMap* create() {
            return il2cpp::create_object<app::ExecutionOrderMap>(get_class());
        }
    } // namespace ExecutionOrderMap
} // namespace app::classes::types
