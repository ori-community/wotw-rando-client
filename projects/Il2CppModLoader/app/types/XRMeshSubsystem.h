#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRMeshSubsystem {
        namespace {
            inline app::XRMeshSubsystem__Class* type_info_ref = nullptr;
        }
        inline app::XRMeshSubsystem__Class** type_info = &type_info_ref;
        inline app::XRMeshSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRMeshSubsystem__Class>(type_info, "UnityEngine.Experimental.XR", "XRMeshSubsystem");
        }
        inline app::XRMeshSubsystem* create() {
            return il2cpp::create_object<app::XRMeshSubsystem>(get_class());
        }
    } // namespace XRMeshSubsystem
} // namespace app::classes::types
