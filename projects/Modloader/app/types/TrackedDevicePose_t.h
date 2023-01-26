#pragma once
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#include <Modloader/app/structs/TrackedDevicePose_t__Array.h>
#include <Modloader/app/structs/TrackedDevicePose_t__Boxed.h>
#include <Modloader/app/structs/TrackedDevicePose_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrackedDevicePose_t {
        inline app::TrackedDevicePose_t__Class** type_info() {
            static app::TrackedDevicePose_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TrackedDevicePose_t__Class**)(modloader::win::memory::resolve_rva(0x04759490));
            }
            return cache;
        }
        inline app::TrackedDevicePose_t__Class* get_class() {
            return il2cpp::get_class<app::TrackedDevicePose_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "TrackedDevicePose_t");
        }
        inline app::TrackedDevicePose_t* create() {
            return il2cpp::create_object<app::TrackedDevicePose_t>(get_class());
        }
        inline app::TrackedDevicePose_t__Boxed* box(app::TrackedDevicePose_t value) {
            return il2cpp::box_value<app::TrackedDevicePose_t__Boxed>(get_class(), value);
        }
        inline app::TrackedDevicePose_t__Array* create_array(int size) {
            return il2cpp::array_new<app::TrackedDevicePose_t__Array>(get_class(), size);
        }
        inline app::TrackedDevicePose_t__Array* create_array(const std::vector<app::TrackedDevicePose_t>& items) {
            return il2cpp::array_new<app::TrackedDevicePose_t__Array>(get_class(), items);
        }
    } // namespace TrackedDevicePose_t
} // namespace app::classes::types
