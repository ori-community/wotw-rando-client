#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_CompositorDumpImages {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_CompositorDumpImages__Class** type_info;
        inline app::IVRCompositor_CompositorDumpImages__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CompositorDumpImages__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CompositorDumpImages");
        }
        inline app::IVRCompositor_CompositorDumpImages* create() {
            return il2cpp::create_object<app::IVRCompositor_CompositorDumpImages>(get_class());
        }
    } // namespace IVRCompositor_CompositorDumpImages
} // namespace app::classes::types
