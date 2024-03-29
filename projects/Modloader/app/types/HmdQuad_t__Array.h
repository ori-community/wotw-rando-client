#pragma once
#include <Modloader/app/structs/HmdQuad_t__Array.h>
#include <Modloader/app/structs/HmdQuad_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HmdQuad_t__Array {
        inline app::HmdQuad_t__Array__Class** type_info() {
            static app::HmdQuad_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HmdQuad_t__Array__Class**)(modloader::win::memory::resolve_rva(0x0470DD70));
            }
            return cache;
        }
        inline app::HmdQuad_t__Array__Class* get_class() {
            return il2cpp::get_class<app::HmdQuad_t__Array__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "HmdQuad_t[]");
        }
        inline app::HmdQuad_t__Array* create() {
            return il2cpp::create_object<app::HmdQuad_t__Array>(get_class());
        }
    } // namespace HmdQuad_t__Array
} // namespace app::classes::types
