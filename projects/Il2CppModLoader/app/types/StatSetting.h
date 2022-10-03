#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatSetting {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StatSetting__Class** type_info;
        inline app::StatSetting__Class* get_class() {
            return il2cpp::get_class<app::StatSetting__Class>(type_info, "", "StatSetting");
        }
        inline app::StatSetting* create() {
            return il2cpp::create_object<app::StatSetting>(get_class());
        }
        inline app::StatSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::StatSetting__Array>(get_class(), size);
        }
    } // namespace StatSetting
} // namespace app::classes::types
