#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_RemoveKeyInSection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_RemoveKeyInSection__Class** type_info;
        inline app::IVRSettings_RemoveKeyInSection__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_RemoveKeyInSection__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_RemoveKeyInSection");
        }
        inline app::IVRSettings_RemoveKeyInSection* create() {
            return il2cpp::create_object<app::IVRSettings_RemoveKeyInSection>(get_class());
        }
    } // namespace IVRSettings_RemoveKeyInSection
} // namespace app::classes::types
