#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldEventsRuntime__Array__Class.h>
#include <Modloader/app/structs/WorldEventsRuntime__Array.h>

namespace app::classes::types {
    namespace WorldEventsRuntime__Array {
        namespace {
            inline app::WorldEventsRuntime__Array__Class* type_info_ref = nullptr;
        }
        inline app::WorldEventsRuntime__Array__Class** type_info = &type_info_ref;
        inline app::WorldEventsRuntime__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsRuntime__Array__Class>(type_info, "", "WorldEventsRuntime[]");
        }
        inline app::WorldEventsRuntime__Array* create() {
            return il2cpp::create_object<app::WorldEventsRuntime__Array>(get_class());
        }
    } // namespace WorldEventsRuntime__Array
} // namespace app::classes::types
