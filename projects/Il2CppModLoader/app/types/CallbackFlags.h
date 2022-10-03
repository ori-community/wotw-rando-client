#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallbackFlags {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CallbackFlags__Class** type_info;
        inline app::CallbackFlags__Class* get_class() {
            return il2cpp::get_class<app::CallbackFlags__Class>(type_info, "AK.Wwise", "CallbackFlags");
        }
        inline app::CallbackFlags* create() {
            return il2cpp::create_object<app::CallbackFlags>(get_class());
        }
    } // namespace CallbackFlags
} // namespace app::classes::types
