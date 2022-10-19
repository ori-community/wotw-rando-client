#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttachJointSettings {
        inline app::AttachJointSettings__Class** type_info = (app::AttachJointSettings__Class**)(modloader::win::memory::resolve_rva(0x0474CDC0));
        inline app::AttachJointSettings__Class* get_class() {
            return il2cpp::get_class<app::AttachJointSettings__Class>(type_info, "Moon", "AttachJointSettings");
        }
        inline app::AttachJointSettings* create() {
            return il2cpp::create_object<app::AttachJointSettings>(get_class());
        }
    } // namespace AttachJointSettings
} // namespace app::classes::types
