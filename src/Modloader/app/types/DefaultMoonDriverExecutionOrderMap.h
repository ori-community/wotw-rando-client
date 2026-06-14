#pragma once
#include <Modloader/app/structs/DefaultMoonDriverExecutionOrderMap.h>
#include <Modloader/app/structs/DefaultMoonDriverExecutionOrderMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultMoonDriverExecutionOrderMap {
        inline app::DefaultMoonDriverExecutionOrderMap__Class** type_info() {
            static app::DefaultMoonDriverExecutionOrderMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultMoonDriverExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x0474D230));
            }
            return cache;
        }
        inline app::DefaultMoonDriverExecutionOrderMap__Class* get_class() {
            return il2cpp::get_class<app::DefaultMoonDriverExecutionOrderMap__Class>(type_info(), "Moon", "DefaultMoonDriverExecutionOrderMap");
        }
        inline app::DefaultMoonDriverExecutionOrderMap* create() {
            return il2cpp::create_object<app::DefaultMoonDriverExecutionOrderMap>(get_class());
        }
    } // namespace DefaultMoonDriverExecutionOrderMap
} // namespace app::classes::types
