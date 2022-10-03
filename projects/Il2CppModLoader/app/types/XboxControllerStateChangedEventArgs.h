#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxControllerStateChangedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxControllerStateChangedEventArgs__Class** type_info;
        inline app::XboxControllerStateChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerStateChangedEventArgs__Class>(type_info, "J2i.Net.XInputWrapper", "XboxControllerStateChangedEventArgs");
        }
        inline app::XboxControllerStateChangedEventArgs* create() {
            return il2cpp::create_object<app::XboxControllerStateChangedEventArgs>(get_class());
        }
    } // namespace XboxControllerStateChangedEventArgs
} // namespace app::classes::types
