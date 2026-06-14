#pragma once
#include <Modloader/app/structs/VREvent_t_Packed.h>
#include <Modloader/app/structs/VREvent_t_Packed__Boxed.h>
#include <Modloader/app/structs/VREvent_t_Packed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VREvent_t_Packed {
        inline app::VREvent_t_Packed__Class** type_info() {
            static app::VREvent_t_Packed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VREvent_t_Packed__Class**)(modloader::win::memory::resolve_rva(0x0477C0B0));
            }
            return cache;
        }
        inline app::VREvent_t_Packed__Class* get_class() {
            return il2cpp::get_class<app::VREvent_t_Packed__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VREvent_t_Packed");
        }
        inline app::VREvent_t_Packed* create() {
            return il2cpp::create_object<app::VREvent_t_Packed>(get_class());
        }
        inline app::VREvent_t_Packed__Boxed* box(app::VREvent_t_Packed value) {
            return il2cpp::box_value<app::VREvent_t_Packed__Boxed>(get_class(), value);
        }
    } // namespace VREvent_t_Packed
} // namespace app::classes::types
