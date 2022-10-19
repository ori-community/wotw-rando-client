#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRRenderModels {
        inline app::IVRRenderModels__Class** type_info = (app::IVRRenderModels__Class**)(modloader::win::memory::resolve_rva(0x0472D768));
        inline app::IVRRenderModels__Class* get_class() {
            return il2cpp::get_class<app::IVRRenderModels__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels");
        }
        inline app::IVRRenderModels* create() {
            return il2cpp::create_object<app::IVRRenderModels>(get_class());
        }
        inline app::IVRRenderModels__Boxed* box(app::IVRRenderModels value) {
            return il2cpp::box_value<app::IVRRenderModels__Boxed>(get_class(), value);
        }
    } // namespace IVRRenderModels
} // namespace app::classes::types
