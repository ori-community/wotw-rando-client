#pragma once
#include <Modloader/app/structs/HmdRect2_t.h>
#include <Modloader/app/structs/HmdRect2_t__Boxed.h>
#include <Modloader/app/structs/HmdRect2_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HmdRect2_t {
        inline app::HmdRect2_t__Class** type_info() {
            static app::HmdRect2_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HmdRect2_t__Class**)(modloader::win::memory::resolve_rva(0x04766C68));
            }
            return cache;
        }
        inline app::HmdRect2_t__Class* get_class() {
            return il2cpp::get_class<app::HmdRect2_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "HmdRect2_t");
        }
        inline app::HmdRect2_t* create() {
            return il2cpp::create_object<app::HmdRect2_t>(get_class());
        }
        inline app::HmdRect2_t__Boxed* box(app::HmdRect2_t value) {
            return il2cpp::box_value<app::HmdRect2_t__Boxed>(get_class(), value);
        }
    } // namespace HmdRect2_t
} // namespace app::classes::types
