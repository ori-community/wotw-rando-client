#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISerializedUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISerializedUberState__Class** type_info;
        inline app::ISerializedUberState__Class* get_class() {
            return il2cpp::get_class<app::ISerializedUberState__Class>(type_info, "Moon", "ISerializedUberState");
        }
    } // namespace ISerializedUberState
} // namespace app::classes::types
