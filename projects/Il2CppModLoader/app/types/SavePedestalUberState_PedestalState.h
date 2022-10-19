#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SavePedestalUberState_PedestalState {
        inline app::SavePedestalUberState_PedestalState__Class** type_info = (app::SavePedestalUberState_PedestalState__Class**)(modloader::win::memory::resolve_rva(0x0473E320));
        inline app::SavePedestalUberState_PedestalState__Class* get_class() {
            return il2cpp::get_nested_class<app::SavePedestalUberState_PedestalState__Class>(type_info, "Moon.uberSerializationWisp", "SavePedestalUberState", "PedestalState");
        }
        inline app::SavePedestalUberState_PedestalState* create() {
            return il2cpp::create_object<app::SavePedestalUberState_PedestalState>(get_class());
        }
    } // namespace SavePedestalUberState_PedestalState
} // namespace app::classes::types
