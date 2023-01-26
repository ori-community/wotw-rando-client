#pragma once
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/SerializedFloatUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializedFloatUberState {
        inline app::SerializedFloatUberState__Class** type_info() {
            static app::SerializedFloatUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializedFloatUberState__Class**)(modloader::win::memory::resolve_rva(0x047249F0));
            }
            return cache;
        }
        inline app::SerializedFloatUberState__Class* get_class() {
            return il2cpp::get_class<app::SerializedFloatUberState__Class>(type_info(), "Moon", "SerializedFloatUberState");
        }
        inline app::SerializedFloatUberState* create() {
            return il2cpp::create_object<app::SerializedFloatUberState>(get_class());
        }
    } // namespace SerializedFloatUberState
} // namespace app::classes::types
