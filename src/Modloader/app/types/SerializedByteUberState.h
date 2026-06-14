#pragma once
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SerializedByteUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializedByteUberState {
        inline app::SerializedByteUberState__Class** type_info() {
            static app::SerializedByteUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializedByteUberState__Class**)(modloader::win::memory::resolve_rva(0x047907B0));
            }
            return cache;
        }
        inline app::SerializedByteUberState__Class* get_class() {
            return il2cpp::get_class<app::SerializedByteUberState__Class>(type_info(), "Moon", "SerializedByteUberState");
        }
        inline app::SerializedByteUberState* create() {
            return il2cpp::create_object<app::SerializedByteUberState>(get_class());
        }
    } // namespace SerializedByteUberState
} // namespace app::classes::types
