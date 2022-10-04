#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAxisInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAxisInput__Class** type_info;
        inline app::IAxisInput__Class* get_class() {
            return il2cpp::get_class<app::IAxisInput__Class>(type_info, "SmartInput", "IAxisInput");
        }
        inline app::IAxisInput* create() {
            return il2cpp::create_object<app::IAxisInput>(get_class());
        }
        inline app::IAxisInput__Array* create_array(int size) {
            return il2cpp::array_new<app::IAxisInput__Array>(get_class(), size);
        }
    } // namespace IAxisInput
} // namespace app::classes::types
