#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LowPassFilterSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LowPassFilterSettings__Class** type_info;
        inline app::LowPassFilterSettings__Class* get_class() {
            return il2cpp::get_class<app::LowPassFilterSettings__Class>(type_info, "", "LowPassFilterSettings");
        }
        inline app::LowPassFilterSettings* create() {
            return il2cpp::create_object<app::LowPassFilterSettings>(get_class());
        }
    } // namespace LowPassFilterSettings
} // namespace app::classes::types
