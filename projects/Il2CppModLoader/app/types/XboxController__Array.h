#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxController__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxController__Array__Class** type_info;
        inline app::XboxController__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxController__Array__Class>(type_info, "J2i.Net.XInputWrapper", "XboxController[]");
        }
        inline app::XboxController__Array* create() {
            return il2cpp::create_object<app::XboxController__Array>(get_class());
        }
    } // namespace XboxController__Array
} // namespace app::classes::types
