#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldEventsRuntime {
        inline app::WorldEventsRuntime__Class** type_info = (app::WorldEventsRuntime__Class**)(modloader::win::memory::resolve_rva(0x0470FA78));
        inline app::WorldEventsRuntime__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsRuntime__Class>(type_info, "", "WorldEventsRuntime");
        }
        inline app::WorldEventsRuntime* create() {
            return il2cpp::create_object<app::WorldEventsRuntime>(get_class());
        }
        inline app::WorldEventsRuntime__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldEventsRuntime__Array>(get_class(), size);
        }
        inline app::WorldEventsRuntime__Array* create_array(const std::vector<app::WorldEventsRuntime*>& items) {
            return il2cpp::array_new<app::WorldEventsRuntime__Array>(get_class(), items);
        }
    } // namespace WorldEventsRuntime
} // namespace app::classes::types
