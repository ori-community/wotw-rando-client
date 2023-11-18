#pragma once
#include <Modloader/app/structs/RenderModel_ControllerMode_State_t.h>
#include <Modloader/app/structs/RenderModel_ControllerMode_State_t__Boxed.h>
#include <Modloader/app/structs/RenderModel_ControllerMode_State_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderModel_ControllerMode_State_t {
        inline app::RenderModel_ControllerMode_State_t__Class** type_info() {
            static app::RenderModel_ControllerMode_State_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderModel_ControllerMode_State_t__Class**)(modloader::win::memory::resolve_rva(0x047876E8));
            }
            return cache;
        }
        inline app::RenderModel_ControllerMode_State_t__Class* get_class() {
            return il2cpp::get_class<app::RenderModel_ControllerMode_State_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "RenderModel_ControllerMode_State_t");
        }
        inline app::RenderModel_ControllerMode_State_t* create() {
            return il2cpp::create_object<app::RenderModel_ControllerMode_State_t>(get_class());
        }
        inline app::RenderModel_ControllerMode_State_t__Boxed* box(app::RenderModel_ControllerMode_State_t value) {
            return il2cpp::box_value<app::RenderModel_ControllerMode_State_t__Boxed>(get_class(), value);
        }
    } // namespace RenderModel_ControllerMode_State_t
} // namespace app::classes::types
