#pragma once
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/HmdMatrix34_t__Boxed.h>
#include <Modloader/app/structs/HmdMatrix34_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HmdMatrix34_t {
        inline app::HmdMatrix34_t__Class** type_info() {
            static app::HmdMatrix34_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HmdMatrix34_t__Class**)(modloader::win::memory::resolve_rva(0x04765138));
            }
            return cache;
        }
        inline app::HmdMatrix34_t__Class* get_class() {
            return il2cpp::get_class<app::HmdMatrix34_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "HmdMatrix34_t");
        }
        inline app::HmdMatrix34_t* create() {
            return il2cpp::create_object<app::HmdMatrix34_t>(get_class());
        }
        inline app::HmdMatrix34_t__Boxed* box(app::HmdMatrix34_t value) {
            return il2cpp::box_value<app::HmdMatrix34_t__Boxed>(get_class(), value);
        }
    } // namespace HmdMatrix34_t
} // namespace app::classes::types
