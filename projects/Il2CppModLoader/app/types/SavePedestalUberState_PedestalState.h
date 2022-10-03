#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SavePedestalUberState_PedestalState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SavePedestalUberState_PedestalState__Class** type_info;
        inline app::SavePedestalUberState_PedestalState__Class* get_class() {
            return il2cpp::get_nested_class<app::SavePedestalUberState_PedestalState__Class>(type_info, "Moon.uberSerializationWisp", "SavePedestalUberState", "PedestalState");
        }
        inline app::SavePedestalUberState_PedestalState* create() {
            return il2cpp::create_object<app::SavePedestalUberState_PedestalState>(get_class());
        }
    } // namespace SavePedestalUberState_PedestalState
} // namespace app::classes::types
