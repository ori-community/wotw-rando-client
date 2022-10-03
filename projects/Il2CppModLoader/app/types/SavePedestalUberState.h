#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SavePedestalUberState {
        namespace {
            app::SavePedestalUberState__Class* type_info_ref = nullptr;
        }
        app::SavePedestalUberState__Class** type_info = &type_info_ref;
        inline app::SavePedestalUberState__Class* get_class() {
            return il2cpp::get_class<app::SavePedestalUberState__Class>(type_info, "Moon.uberSerializationWisp", "SavePedestalUberState");
        }
        inline app::SavePedestalUberState* create() {
            return il2cpp::create_object<app::SavePedestalUberState>(get_class());
        }
    } // namespace SavePedestalUberState
} // namespace app::classes::types
