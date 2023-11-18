#pragma once
#include <Modloader/app/structs/SavePedestalUberState_PedestalState.h>
#include <Modloader/app/structs/SavePedestalUberState_PedestalState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SavePedestalUberState_PedestalState {
        inline app::SavePedestalUberState_PedestalState__Class** type_info() {
            static app::SavePedestalUberState_PedestalState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SavePedestalUberState_PedestalState__Class**)(modloader::win::memory::resolve_rva(0x0473E320));
            }
            return cache;
        }
        inline app::SavePedestalUberState_PedestalState__Class* get_class() {
            return il2cpp::get_nested_class<app::SavePedestalUberState_PedestalState__Class>(type_info(), "Moon.uberSerializationWisp", "SavePedestalUberState", "PedestalState");
        }
        inline app::SavePedestalUberState_PedestalState* create() {
            return il2cpp::create_object<app::SavePedestalUberState_PedestalState>(get_class());
        }
    } // namespace SavePedestalUberState_PedestalState
} // namespace app::classes::types
