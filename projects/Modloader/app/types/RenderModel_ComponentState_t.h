#pragma once
#include <Modloader/app/structs/RenderModel_ComponentState_t.h>
#include <Modloader/app/structs/RenderModel_ComponentState_t__Boxed.h>
#include <Modloader/app/structs/RenderModel_ComponentState_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderModel_ComponentState_t {
        inline app::RenderModel_ComponentState_t__Class** type_info() {
            static app::RenderModel_ComponentState_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderModel_ComponentState_t__Class**)(modloader::win::memory::resolve_rva(0x04777060));
            }
            return cache;
        }
        inline app::RenderModel_ComponentState_t__Class* get_class() {
            return il2cpp::get_class<app::RenderModel_ComponentState_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "RenderModel_ComponentState_t");
        }
        inline app::RenderModel_ComponentState_t* create() {
            return il2cpp::create_object<app::RenderModel_ComponentState_t>(get_class());
        }
        inline app::RenderModel_ComponentState_t__Boxed* box(app::RenderModel_ComponentState_t value) {
            return il2cpp::box_value<app::RenderModel_ComponentState_t__Boxed>(get_class(), value);
        }
    } // namespace RenderModel_ComponentState_t
} // namespace app::classes::types
