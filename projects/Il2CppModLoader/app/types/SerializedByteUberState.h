#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializedByteUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializedByteUberState__Class** type_info;
        inline app::SerializedByteUberState__Class* get_class() {
            return il2cpp::get_class<app::SerializedByteUberState__Class>(type_info, "Moon", "SerializedByteUberState");
        }
        inline app::SerializedByteUberState* create() {
            return il2cpp::create_object<app::SerializedByteUberState>(get_class());
        }
    } // namespace SerializedByteUberState
} // namespace app::classes::types
