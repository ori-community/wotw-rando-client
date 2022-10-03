#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightInfluence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightInfluence__Class** type_info;
        inline app::LightInfluence__Class* get_class() {
            return il2cpp::get_class<app::LightInfluence__Class>(type_info, "", "LightInfluence");
        }
        inline app::LightInfluence* create() {
            return il2cpp::create_object<app::LightInfluence>(get_class());
        }
        inline app::LightInfluence__Array* create_array(int size) {
            return il2cpp::array_new<app::LightInfluence__Array>(get_class(), size);
        }
    } // namespace LightInfluence
} // namespace app::classes::types
