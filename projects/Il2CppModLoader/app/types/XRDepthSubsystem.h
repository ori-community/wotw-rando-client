#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XRDepthSubsystem {
        namespace {
            inline app::XRDepthSubsystem__Class* type_info_ref = nullptr;
        }
        inline app::XRDepthSubsystem__Class** type_info = &type_info_ref;
        inline app::XRDepthSubsystem__Class* get_class() {
            return il2cpp::get_class<app::XRDepthSubsystem__Class>(type_info, "UnityEngine.Experimental.XR", "XRDepthSubsystem");
        }
        inline app::XRDepthSubsystem* create() {
            return il2cpp::create_object<app::XRDepthSubsystem>(get_class());
        }
    } // namespace XRDepthSubsystem
} // namespace app::classes::types
