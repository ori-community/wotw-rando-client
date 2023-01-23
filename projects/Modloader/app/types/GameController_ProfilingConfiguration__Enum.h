#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameController_ProfilingConfiguration__Enum__Class.h>
#include <Modloader/app/structs/GameController_ProfilingConfiguration__Enum.h>
#include <Modloader/app/structs/GameController_ProfilingConfiguration__Enum__Array.h>

namespace app::classes::types {
    namespace GameController_ProfilingConfiguration__Enum {
        inline app::GameController_ProfilingConfiguration__Enum__Class** type_info = (app::GameController_ProfilingConfiguration__Enum__Class**)(modloader::win::memory::resolve_rva(0x04732308));
        inline app::GameController_ProfilingConfiguration__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_ProfilingConfiguration__Enum__Class>(type_info, "", "GameController", "ProfilingConfiguration");
        }
        inline app::GameController_ProfilingConfiguration__Enum* create() {
            return il2cpp::create_object<app::GameController_ProfilingConfiguration__Enum>(get_class());
        }
        inline app::GameController_ProfilingConfiguration__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::GameController_ProfilingConfiguration__Enum__Array>(get_class(), size);
        }
        inline app::GameController_ProfilingConfiguration__Enum__Array* create_array(const std::vector<app::GameController_ProfilingConfiguration__Enum*>& items) {
            return il2cpp::array_new<app::GameController_ProfilingConfiguration__Enum__Array>(get_class(), items);
        }
    } // namespace GameController_ProfilingConfiguration__Enum
} // namespace app::classes::types
