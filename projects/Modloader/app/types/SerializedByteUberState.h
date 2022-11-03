#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializedByteUberState {
        inline app::SerializedByteUberState__Class** type_info = (app::SerializedByteUberState__Class**)(modloader::win::memory::resolve_rva(0x047907B0));
        inline app::SerializedByteUberState__Class* get_class() {
            return il2cpp::get_class<app::SerializedByteUberState__Class>(type_info, "Moon", "SerializedByteUberState");
        }
        inline app::SerializedByteUberState* create() {
            return il2cpp::create_object<app::SerializedByteUberState>(get_class());
        }
    } // namespace SerializedByteUberState
} // namespace app::classes::types
