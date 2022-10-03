#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneSession {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneSession__Class** type_info;
        inline app::XboxOneSession__Class* get_class() {
            return il2cpp::get_class<app::XboxOneSession__Class>(type_info, "", "XboxOneSession");
        }
        inline app::XboxOneSession* create() {
            return il2cpp::create_object<app::XboxOneSession>(get_class());
        }
    } // namespace XboxOneSession
} // namespace app::classes::types
