#pragma once
#include <Modloader/app/structs/HmdColor_t.h>
#include <Modloader/app/structs/HmdColor_t__Boxed.h>
#include <Modloader/app/structs/HmdColor_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HmdColor_t {
        inline app::HmdColor_t__Class** type_info() {
            static app::HmdColor_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HmdColor_t__Class**)(modloader::win::memory::resolve_rva(0x04791440));
            }
            return cache;
        }
        inline app::HmdColor_t__Class* get_class() {
            return il2cpp::get_class<app::HmdColor_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "HmdColor_t");
        }
        inline app::HmdColor_t* create() {
            return il2cpp::create_object<app::HmdColor_t>(get_class());
        }
        inline app::HmdColor_t__Boxed* box(app::HmdColor_t value) {
            return il2cpp::box_value<app::HmdColor_t__Boxed>(get_class(), value);
        }
    } // namespace HmdColor_t
} // namespace app::classes::types
