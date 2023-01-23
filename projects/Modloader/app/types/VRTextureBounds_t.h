#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VRTextureBounds_t__Class.h>
#include <Modloader/app/structs/VRTextureBounds_t.h>
#include <Modloader/app/structs/VRTextureBounds_t__Boxed.h>

namespace app::classes::types {
    namespace VRTextureBounds_t {
        inline app::VRTextureBounds_t__Class** type_info = (app::VRTextureBounds_t__Class**)(modloader::win::memory::resolve_rva(0x04790208));
        inline app::VRTextureBounds_t__Class* get_class() {
            return il2cpp::get_class<app::VRTextureBounds_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VRTextureBounds_t");
        }
        inline app::VRTextureBounds_t* create() {
            return il2cpp::create_object<app::VRTextureBounds_t>(get_class());
        }
        inline app::VRTextureBounds_t__Boxed* box(app::VRTextureBounds_t value) {
            return il2cpp::box_value<app::VRTextureBounds_t__Boxed>(get_class(), value);
        }
    } // namespace VRTextureBounds_t
} // namespace app::classes::types
