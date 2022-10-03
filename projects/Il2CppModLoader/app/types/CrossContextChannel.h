#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossContextChannel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossContextChannel__Class** type_info;
        inline app::CrossContextChannel__Class* get_class() {
            return il2cpp::get_class<app::CrossContextChannel__Class>(type_info, "System.Runtime.Remoting.Contexts", "CrossContextChannel");
        }
        inline app::CrossContextChannel* create() {
            return il2cpp::create_object<app::CrossContextChannel>(get_class());
        }
    } // namespace CrossContextChannel
} // namespace app::classes::types
