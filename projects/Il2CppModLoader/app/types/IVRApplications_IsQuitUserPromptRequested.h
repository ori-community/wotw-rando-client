#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_IsQuitUserPromptRequested {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_IsQuitUserPromptRequested__Class** type_info;
        inline app::IVRApplications_IsQuitUserPromptRequested__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_IsQuitUserPromptRequested__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_IsQuitUserPromptRequested");
        }
        inline app::IVRApplications_IsQuitUserPromptRequested* create() {
            return il2cpp::create_object<app::IVRApplications_IsQuitUserPromptRequested>(get_class());
        }
    } // namespace IVRApplications_IsQuitUserPromptRequested
} // namespace app::classes::types
