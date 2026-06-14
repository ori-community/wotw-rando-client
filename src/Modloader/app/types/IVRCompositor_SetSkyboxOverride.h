#pragma once
#include <Modloader/app/structs/IVRCompositor_SetSkyboxOverride.h>
#include <Modloader/app/structs/IVRCompositor_SetSkyboxOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_SetSkyboxOverride {
        inline app::IVRCompositor_SetSkyboxOverride__Class** type_info() {
            static app::IVRCompositor_SetSkyboxOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_SetSkyboxOverride__Class**)(modloader::win::memory::resolve_rva(0x04726BF8));
            }
            return cache;
        }
        inline app::IVRCompositor_SetSkyboxOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SetSkyboxOverride__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SetSkyboxOverride");
        }
        inline app::IVRCompositor_SetSkyboxOverride* create() {
            return il2cpp::create_object<app::IVRCompositor_SetSkyboxOverride>(get_class());
        }
    } // namespace IVRCompositor_SetSkyboxOverride
} // namespace app::classes::types
