#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldEventsOnAwake_WorldEventState {
        namespace {
            inline app::WorldEventsOnAwake_WorldEventState__Class* type_info_ref = nullptr;
        }
        inline app::WorldEventsOnAwake_WorldEventState__Class** type_info = &type_info_ref;
        inline app::WorldEventsOnAwake_WorldEventState__Class* get_class() {
            return il2cpp::get_nested_class<app::WorldEventsOnAwake_WorldEventState__Class>(type_info, "", "WorldEventsOnAwake", "WorldEventState");
        }
        inline app::WorldEventsOnAwake_WorldEventState* create() {
            return il2cpp::create_object<app::WorldEventsOnAwake_WorldEventState>(get_class());
        }
        inline app::WorldEventsOnAwake_WorldEventState__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldEventsOnAwake_WorldEventState__Array>(get_class(), size);
        }
        inline app::WorldEventsOnAwake_WorldEventState__Array* create_array(const std::vector<app::WorldEventsOnAwake_WorldEventState*>& items) {
            return il2cpp::array_new<app::WorldEventsOnAwake_WorldEventState__Array>(get_class(), items);
        }
    } // namespace WorldEventsOnAwake_WorldEventState
} // namespace app::classes::types
