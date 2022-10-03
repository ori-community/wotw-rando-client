#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneRichPresence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneRichPresence__Class** type_info;
        inline app::XboxOneRichPresence__Class* get_class() {
            return il2cpp::get_class<app::XboxOneRichPresence__Class>(type_info, "", "XboxOneRichPresence");
        }
        inline app::XboxOneRichPresence* create() {
            return il2cpp::create_object<app::XboxOneRichPresence>(get_class());
        }
    } // namespace XboxOneRichPresence
} // namespace app::classes::types
