#pragma once
#include <Modloader/app/structs/IMoonDriverExecutionOrderMap.h>
#include <Modloader/app/structs/IMoonDriverExecutionOrderMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonDriverExecutionOrderMap {
        inline app::IMoonDriverExecutionOrderMap__Class** type_info() {
            static app::IMoonDriverExecutionOrderMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonDriverExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x047581E8));
            }
            return cache;
        }
        inline app::IMoonDriverExecutionOrderMap__Class* get_class() {
            return il2cpp::get_class<app::IMoonDriverExecutionOrderMap__Class>(type_info(), "Moon", "IMoonDriverExecutionOrderMap");
        }
    } // namespace IMoonDriverExecutionOrderMap
} // namespace app::classes::types
