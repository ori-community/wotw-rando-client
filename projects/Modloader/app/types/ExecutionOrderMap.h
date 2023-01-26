#pragma once
#include <Modloader/app/structs/ExecutionOrderMap.h>
#include <Modloader/app/structs/ExecutionOrderMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecutionOrderMap {
        inline app::ExecutionOrderMap__Class** type_info() {
            static app::ExecutionOrderMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x04774530));
            }
            return cache;
        }
        inline app::ExecutionOrderMap__Class* get_class() {
            return il2cpp::get_class<app::ExecutionOrderMap__Class>(type_info(), "Moon", "ExecutionOrderMap");
        }
        inline app::ExecutionOrderMap* create() {
            return il2cpp::create_object<app::ExecutionOrderMap>(get_class());
        }
    } // namespace ExecutionOrderMap
} // namespace app::classes::types
