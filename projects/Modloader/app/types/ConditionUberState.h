#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConditionUberState__Class.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/ConditionUberState__Array.h>

namespace app::classes::types {
    namespace ConditionUberState {
        inline app::ConditionUberState__Class** type_info = (app::ConditionUberState__Class**)(modloader::win::memory::resolve_rva(0x04762DD0));
        inline app::ConditionUberState__Class* get_class() {
            return il2cpp::get_class<app::ConditionUberState__Class>(type_info, "Moon", "ConditionUberState");
        }
        inline app::ConditionUberState* create() {
            return il2cpp::create_object<app::ConditionUberState>(get_class());
        }
        inline app::ConditionUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::ConditionUberState__Array>(get_class(), size);
        }
        inline app::ConditionUberState__Array* create_array(const std::vector<app::ConditionUberState*>& items) {
            return il2cpp::array_new<app::ConditionUberState__Array>(get_class(), items);
        }
    } // namespace ConditionUberState
} // namespace app::classes::types
