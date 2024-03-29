#pragma once
#include <Modloader/app/structs/WorldEventsRuntime.h>
#include <Modloader/app/structs/WorldEventsRuntime__Array.h>
#include <Modloader/app/structs/WorldEventsRuntime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldEventsRuntime {
        inline app::WorldEventsRuntime__Class** type_info() {
            static app::WorldEventsRuntime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WorldEventsRuntime__Class**)(modloader::win::memory::resolve_rva(0x0470FA78));
            }
            return cache;
        }
        inline app::WorldEventsRuntime__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsRuntime__Class>(type_info(), "", "WorldEventsRuntime");
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
