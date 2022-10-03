#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldEventsRuntime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WorldEventsRuntime__Class** type_info;
        inline app::WorldEventsRuntime__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsRuntime__Class>(type_info, "", "WorldEventsRuntime");
        }
        inline app::WorldEventsRuntime* create() {
            return il2cpp::create_object<app::WorldEventsRuntime>(get_class());
        }
        inline app::WorldEventsRuntime__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldEventsRuntime__Array>(get_class(), size);
        }
    } // namespace WorldEventsRuntime
} // namespace app::classes::types
