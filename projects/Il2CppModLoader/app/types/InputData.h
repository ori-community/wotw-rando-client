#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InputData__Class** type_info;
        inline app::InputData__Class* get_class() {
            return il2cpp::get_class<app::InputData__Class>(type_info, "", "InputData");
        }
        inline app::InputData* create() {
            return il2cpp::create_object<app::InputData>(get_class());
        }
        inline app::InputData__Array* create_array(int size) {
            return il2cpp::array_new<app::InputData__Array>(get_class(), size);
        }
    } // namespace InputData
} // namespace app::classes::types
