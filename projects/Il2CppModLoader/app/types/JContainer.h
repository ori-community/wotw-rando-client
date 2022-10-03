#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JContainer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JContainer__Class** type_info;
        inline app::JContainer__Class* get_class() {
            return il2cpp::get_class<app::JContainer__Class>(type_info, "Newtonsoft.Json.Linq", "JContainer");
        }
        inline app::JContainer* create() {
            return il2cpp::create_object<app::JContainer>(get_class());
        }
    } // namespace JContainer
} // namespace app::classes::types
