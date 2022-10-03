#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendMouseEvents {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendMouseEvents__Class** type_info;
        inline app::SendMouseEvents__Class* get_class() {
            return il2cpp::get_class<app::SendMouseEvents__Class>(type_info, "UnityEngine", "SendMouseEvents");
        }
        inline app::SendMouseEvents* create() {
            return il2cpp::create_object<app::SendMouseEvents>(get_class());
        }
    } // namespace SendMouseEvents
} // namespace app::classes::types
