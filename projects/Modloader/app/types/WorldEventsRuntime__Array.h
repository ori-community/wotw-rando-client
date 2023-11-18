#pragma once
#include <Modloader/app/structs/WorldEventsRuntime__Array.h>
#include <Modloader/app/structs/WorldEventsRuntime__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldEventsRuntime__Array {
        inline app::WorldEventsRuntime__Array__Class** type_info() {
            static app::WorldEventsRuntime__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldEventsRuntime__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldEventsRuntime__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsRuntime__Array__Class>(type_info(), "", "WorldEventsRuntime[]");
        }
        inline app::WorldEventsRuntime__Array* create() {
            return il2cpp::create_object<app::WorldEventsRuntime__Array>(get_class());
        }
    } // namespace WorldEventsRuntime__Array
} // namespace app::classes::types
