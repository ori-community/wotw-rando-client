#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachJointSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttachJointSettings__Class** type_info;
        inline app::AttachJointSettings__Class* get_class() {
            return il2cpp::get_class<app::AttachJointSettings__Class>(type_info, "Moon", "AttachJointSettings");
        }
        inline app::AttachJointSettings* create() {
            return il2cpp::create_object<app::AttachJointSettings>(get_class());
        }
    } // namespace AttachJointSettings
} // namespace app::classes::types
