#pragma once
#include <Modloader/app/structs/WorldEventsOnAwake_WorldEventState__Array.h>
#include <Modloader/app/structs/WorldEventsOnAwake_WorldEventState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldEventsOnAwake_WorldEventState__Array {
        inline app::WorldEventsOnAwake_WorldEventState__Array__Class** type_info() {
            static app::WorldEventsOnAwake_WorldEventState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldEventsOnAwake_WorldEventState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldEventsOnAwake_WorldEventState__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsOnAwake_WorldEventState__Array__Class>(type_info(), "", "WorldEventsOnAwake+WorldEventState[]");
        }
        inline app::WorldEventsOnAwake_WorldEventState__Array* create() {
            return il2cpp::create_object<app::WorldEventsOnAwake_WorldEventState__Array>(get_class());
        }
    } // namespace WorldEventsOnAwake_WorldEventState__Array
} // namespace app::classes::types
