#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_CompositorDumpImages {
        inline app::IVRCompositor_CompositorDumpImages__Class** type_info = (app::IVRCompositor_CompositorDumpImages__Class**)(modloader::win::memory::resolve_rva(0x0473FE10));
        inline app::IVRCompositor_CompositorDumpImages__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CompositorDumpImages__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CompositorDumpImages");
        }
        inline app::IVRCompositor_CompositorDumpImages* create() {
            return il2cpp::create_object<app::IVRCompositor_CompositorDumpImages>(get_class());
        }
    } // namespace IVRCompositor_CompositorDumpImages
} // namespace app::classes::types
