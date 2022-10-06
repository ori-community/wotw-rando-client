#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICachableInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICachableInput__Class** type_info;
        inline app::ICachableInput__Class* get_class() {
            return il2cpp::get_class<app::ICachableInput__Class>(type_info, "SmartInput", "ICachableInput");
        }
        inline app::ICachableInput__Array* create_array(int size) {
            return il2cpp::array_new<app::ICachableInput__Array>(get_class(), size);
        }
        inline app::ICachableInput__Array* create_array(const std::vector<app::ICachableInput*>& items) {
            return il2cpp::array_new<app::ICachableInput__Array>(get_class(), items);
        }
    } // namespace ICachableInput
} // namespace app::classes::types
