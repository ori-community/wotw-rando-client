#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ClearLastSubmittedFrame {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_ClearLastSubmittedFrame__Class** type_info;
        inline app::IVRCompositor_ClearLastSubmittedFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ClearLastSubmittedFrame__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ClearLastSubmittedFrame");
        }
        inline app::IVRCompositor_ClearLastSubmittedFrame* create() {
            return il2cpp::create_object<app::IVRCompositor_ClearLastSubmittedFrame>(get_class());
        }
    } // namespace IVRCompositor_ClearLastSubmittedFrame
} // namespace app::classes::types
