#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Behaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Behaviour__Class** type_info;
        inline app::Behaviour__Class* get_class() {
            return il2cpp::get_class<app::Behaviour__Class>(type_info, "UnityEngine", "Behaviour");
        }
        inline app::Behaviour* create() {
            return il2cpp::create_object<app::Behaviour>(get_class());
        }
    } // namespace Behaviour
} // namespace app::classes::types
