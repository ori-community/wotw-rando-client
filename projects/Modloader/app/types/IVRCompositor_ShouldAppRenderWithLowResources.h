#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_ShouldAppRenderWithLowResources {
        inline app::IVRCompositor_ShouldAppRenderWithLowResources__Class** type_info = (app::IVRCompositor_ShouldAppRenderWithLowResources__Class**)(modloader::win::memory::resolve_rva(0x047399D0));
        inline app::IVRCompositor_ShouldAppRenderWithLowResources__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ShouldAppRenderWithLowResources__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ShouldAppRenderWithLowResources");
        }
        inline app::IVRCompositor_ShouldAppRenderWithLowResources* create() {
            return il2cpp::create_object<app::IVRCompositor_ShouldAppRenderWithLowResources>(get_class());
        }
    } // namespace IVRCompositor_ShouldAppRenderWithLowResources
} // namespace app::classes::types
