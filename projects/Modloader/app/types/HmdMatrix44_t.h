#pragma once
#include <Modloader/app/structs/HmdMatrix44_t.h>
#include <Modloader/app/structs/HmdMatrix44_t__Boxed.h>
#include <Modloader/app/structs/HmdMatrix44_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HmdMatrix44_t {
        inline app::HmdMatrix44_t__Class** type_info() {
            static app::HmdMatrix44_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HmdMatrix44_t__Class**)(modloader::win::memory::resolve_rva(0x04767558));
            }
            return cache;
        }
        inline app::HmdMatrix44_t__Class* get_class() {
            return il2cpp::get_class<app::HmdMatrix44_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "HmdMatrix44_t");
        }
        inline app::HmdMatrix44_t* create() {
            return il2cpp::create_object<app::HmdMatrix44_t>(get_class());
        }
        inline app::HmdMatrix44_t__Boxed* box(app::HmdMatrix44_t value) {
            return il2cpp::box_value<app::HmdMatrix44_t__Boxed>(get_class(), value);
        }
    } // namespace HmdMatrix44_t
} // namespace app::classes::types
