#pragma once
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedBooleanUberState__Array.h>
#include <Modloader/app/structs/SerializedBooleanUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializedBooleanUberState {
        inline app::SerializedBooleanUberState__Class** type_info() {
            static app::SerializedBooleanUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializedBooleanUberState__Class**)(modloader::win::memory::resolve_rva(0x0471D768));
            }
            return cache;
        }
        inline app::SerializedBooleanUberState__Class* get_class() {
            return il2cpp::get_class<app::SerializedBooleanUberState__Class>(type_info(), "Moon", "SerializedBooleanUberState");
        }
        inline app::SerializedBooleanUberState* create() {
            return il2cpp::create_object<app::SerializedBooleanUberState>(get_class());
        }
        inline app::SerializedBooleanUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializedBooleanUberState__Array>(get_class(), size);
        }
        inline app::SerializedBooleanUberState__Array* create_array(const std::vector<app::SerializedBooleanUberState*>& items) {
            return il2cpp::array_new<app::SerializedBooleanUberState__Array>(get_class(), items);
        }
    } // namespace SerializedBooleanUberState
} // namespace app::classes::types
