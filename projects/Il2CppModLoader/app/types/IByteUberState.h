#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IByteUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IByteUberState__Class** type_info;
        inline app::IByteUberState__Class* get_class() {
            return il2cpp::get_class<app::IByteUberState__Class>(type_info, "Moon", "IByteUberState");
        }
        inline app::IByteUberState* create() {
            return il2cpp::create_object<app::IByteUberState>(get_class());
        }
    } // namespace IByteUberState
} // namespace app::classes::types
