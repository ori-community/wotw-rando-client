#pragma once
#include <Modloader/app/structs/IVRRenderModels.h>
#include <Modloader/app/structs/IVRRenderModels__Boxed.h>
#include <Modloader/app/structs/IVRRenderModels__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels {
        inline app::IVRRenderModels__Class** type_info() {
            static app::IVRRenderModels__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels__Class**)(modloader::win::memory::resolve_rva(0x0472D768));
            }
            return cache;
        }
        inline app::IVRRenderModels__Class* get_class() {
            return il2cpp::get_class<app::IVRRenderModels__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels");
        }
        inline app::IVRRenderModels* create() {
            return il2cpp::create_object<app::IVRRenderModels>(get_class());
        }
        inline app::IVRRenderModels__Boxed* box(app::IVRRenderModels value) {
            return il2cpp::box_value<app::IVRRenderModels__Boxed>(get_class(), value);
        }
    } // namespace IVRRenderModels
} // namespace app::classes::types
