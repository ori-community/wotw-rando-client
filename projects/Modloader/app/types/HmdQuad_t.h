#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HmdQuad_t {
        inline app::HmdQuad_t__Class** type_info = (app::HmdQuad_t__Class**)(modloader::win::memory::resolve_rva(0x04762398));
        inline app::HmdQuad_t__Class* get_class() {
            return il2cpp::get_class<app::HmdQuad_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdQuad_t");
        }
        inline app::HmdQuad_t* create() {
            return il2cpp::create_object<app::HmdQuad_t>(get_class());
        }
        inline app::HmdQuad_t__Boxed* box(app::HmdQuad_t value) {
            return il2cpp::box_value<app::HmdQuad_t__Boxed>(get_class(), value);
        }
        inline app::HmdQuad_t__Array* create_array(int size) {
            return il2cpp::array_new<app::HmdQuad_t__Array>(get_class(), size);
        }
        inline app::HmdQuad_t__Array* create_array(const std::vector<app::HmdQuad_t>& items) {
            return il2cpp::array_new<app::HmdQuad_t__Array>(get_class(), items);
        }
    } // namespace HmdQuad_t
} // namespace app::classes::types
