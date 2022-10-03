#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldEventsOnAwake_WorldEventState__Array {
        namespace {
            app::WorldEventsOnAwake_WorldEventState__Array__Class* type_info_ref = nullptr;
        }
        app::WorldEventsOnAwake_WorldEventState__Array__Class** type_info = &type_info_ref;
        inline app::WorldEventsOnAwake_WorldEventState__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsOnAwake_WorldEventState__Array__Class>(type_info, "", "WorldEventsOnAwake+WorldEventState[]");
        }
        inline app::WorldEventsOnAwake_WorldEventState__Array* create() {
            return il2cpp::create_object<app::WorldEventsOnAwake_WorldEventState__Array>(get_class());
        }
    } // namespace WorldEventsOnAwake_WorldEventState__Array
} // namespace app::classes::types
