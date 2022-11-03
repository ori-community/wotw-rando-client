#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LayerMask {
        inline app::LayerMask__Class** type_info = (app::LayerMask__Class**)(modloader::win::memory::resolve_rva(0x04736670));
        inline app::LayerMask__Class* get_class() {
            return il2cpp::get_class<app::LayerMask__Class>(type_info, "UnityEngine", "LayerMask");
        }
        inline app::LayerMask* create() {
            return il2cpp::create_object<app::LayerMask>(get_class());
        }
        inline app::LayerMask__Boxed* box(app::LayerMask value) {
            return il2cpp::box_value<app::LayerMask__Boxed>(get_class(), value);
        }
    } // namespace LayerMask
} // namespace app::classes::types
