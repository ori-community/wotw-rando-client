#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_RemoveSection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_RemoveSection__Class** type_info;
        inline app::IVRSettings_RemoveSection__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_RemoveSection__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_RemoveSection");
        }
        inline app::IVRSettings_RemoveSection* create() {
            return il2cpp::create_object<app::IVRSettings_RemoveSection>(get_class());
        }
    } // namespace IVRSettings_RemoveSection
} // namespace app::classes::types
