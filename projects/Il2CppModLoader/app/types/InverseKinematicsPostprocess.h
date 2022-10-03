#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InverseKinematicsPostprocess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InverseKinematicsPostprocess__Class** type_info;
        inline app::InverseKinematicsPostprocess__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsPostprocess__Class>(type_info, "Moon", "InverseKinematicsPostprocess");
        }
        inline app::InverseKinematicsPostprocess* create() {
            return il2cpp::create_object<app::InverseKinematicsPostprocess>(get_class());
        }
    } // namespace InverseKinematicsPostprocess
} // namespace app::classes::types
