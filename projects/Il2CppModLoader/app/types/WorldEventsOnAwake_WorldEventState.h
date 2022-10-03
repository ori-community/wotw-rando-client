#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldEventsOnAwake_WorldEventState {
        namespace {
            app::WorldEventsOnAwake_WorldEventState__Class* type_info_ref = nullptr;
        }
        app::WorldEventsOnAwake_WorldEventState__Class** type_info = &type_info_ref;
        inline app::WorldEventsOnAwake_WorldEventState__Class* get_class() {
            return il2cpp::get_nested_class<app::WorldEventsOnAwake_WorldEventState__Class>(type_info, "", "WorldEventsOnAwake", "WorldEventState");
        }
        inline app::WorldEventsOnAwake_WorldEventState* create() {
            return il2cpp::create_object<app::WorldEventsOnAwake_WorldEventState>(get_class());
        }
        inline app::WorldEventsOnAwake_WorldEventState__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldEventsOnAwake_WorldEventState__Array>(get_class(), size);
        }
    } // namespace WorldEventsOnAwake_WorldEventState
} // namespace app::classes::types
