#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetupState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetupState__Class** type_info;
        inline app::SetupState__Class* get_class() {
            return il2cpp::get_class<app::SetupState__Class>(type_info, "", "SetupState");
        }
        inline app::SetupState* create() {
            return il2cpp::create_object<app::SetupState>(get_class());
        }
        inline app::SetupState__Array* create_array(int size) {
            return il2cpp::array_new<app::SetupState__Array>(get_class(), size);
        }
        inline app::SetupState__Array* create_array(const std::vector<app::SetupState*>& items) {
            return il2cpp::array_new<app::SetupState__Array>(get_class(), items);
        }
    } // namespace SetupState
} // namespace app::classes::types
