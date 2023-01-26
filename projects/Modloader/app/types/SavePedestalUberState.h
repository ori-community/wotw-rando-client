#pragma once
#include <Modloader/app/structs/SavePedestalUberState.h>
#include <Modloader/app/structs/SavePedestalUberState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SavePedestalUberState {
        inline app::SavePedestalUberState__Class** type_info() {
            static app::SavePedestalUberState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SavePedestalUberState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SavePedestalUberState__Class* get_class() {
            return il2cpp::get_class<app::SavePedestalUberState__Class>(type_info(), "Moon.uberSerializationWisp", "SavePedestalUberState");
        }
        inline app::SavePedestalUberState* create() {
            return il2cpp::create_object<app::SavePedestalUberState>(get_class());
        }
    } // namespace SavePedestalUberState
} // namespace app::classes::types
