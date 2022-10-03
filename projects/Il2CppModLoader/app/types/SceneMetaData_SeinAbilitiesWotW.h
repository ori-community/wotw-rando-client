#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinAbilitiesWotW {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneMetaData_SeinAbilitiesWotW__Class** type_info;
        inline app::SceneMetaData_SeinAbilitiesWotW__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinAbilitiesWotW__Class>(type_info, "", "SceneMetaData", "SeinAbilitiesWotW");
        }
        inline app::SceneMetaData_SeinAbilitiesWotW* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinAbilitiesWotW>(get_class());
        }
    } // namespace SceneMetaData_SeinAbilitiesWotW
} // namespace app::classes::types
