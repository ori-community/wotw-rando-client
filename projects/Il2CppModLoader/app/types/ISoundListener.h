#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISoundListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISoundListener__Class** type_info;
        inline app::ISoundListener__Class* get_class() {
            return il2cpp::get_class<app::ISoundListener__Class>(type_info, "Moon.Wwise", "ISoundListener");
        }
        inline app::ISoundListener* create() {
            return il2cpp::create_object<app::ISoundListener>(get_class());
        }
    } // namespace ISoundListener
} // namespace app::classes::types
