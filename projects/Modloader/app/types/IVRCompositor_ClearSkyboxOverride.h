#pragma once
#include <Modloader/app/structs/IVRCompositor_ClearSkyboxOverride.h>
#include <Modloader/app/structs/IVRCompositor_ClearSkyboxOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ClearSkyboxOverride {
        inline app::IVRCompositor_ClearSkyboxOverride__Class** type_info() {
            static app::IVRCompositor_ClearSkyboxOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_ClearSkyboxOverride__Class**)(modloader::win::memory::resolve_rva(0x047953F8));
            }
            return cache;
        }
        inline app::IVRCompositor_ClearSkyboxOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ClearSkyboxOverride__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ClearSkyboxOverride");
        }
        inline app::IVRCompositor_ClearSkyboxOverride* create() {
            return il2cpp::create_object<app::IVRCompositor_ClearSkyboxOverride>(get_class());
        }
    } // namespace IVRCompositor_ClearSkyboxOverride
} // namespace app::classes::types
