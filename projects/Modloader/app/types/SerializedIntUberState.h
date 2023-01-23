#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SerializedIntUberState__Class.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/SerializedIntUberState__Array.h>

namespace app::classes::types {
    namespace SerializedIntUberState {
        inline app::SerializedIntUberState__Class** type_info = (app::SerializedIntUberState__Class**)(modloader::win::memory::resolve_rva(0x0471C838));
        inline app::SerializedIntUberState__Class* get_class() {
            return il2cpp::get_class<app::SerializedIntUberState__Class>(type_info, "Moon", "SerializedIntUberState");
        }
        inline app::SerializedIntUberState* create() {
            return il2cpp::create_object<app::SerializedIntUberState>(get_class());
        }
        inline app::SerializedIntUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializedIntUberState__Array>(get_class(), size);
        }
        inline app::SerializedIntUberState__Array* create_array(const std::vector<app::SerializedIntUberState*>& items) {
            return il2cpp::array_new<app::SerializedIntUberState__Array>(get_class(), items);
        }
    } // namespace SerializedIntUberState
} // namespace app::classes::types
