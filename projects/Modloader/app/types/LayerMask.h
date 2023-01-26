#pragma once
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/LayerMask__Boxed.h>
#include <Modloader/app/structs/LayerMask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayerMask {
        inline app::LayerMask__Class** type_info() {
            static app::LayerMask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LayerMask__Class**)(modloader::win::memory::resolve_rva(0x04736670));
            }
            return cache;
        }
        inline app::LayerMask__Class* get_class() {
            return il2cpp::get_class<app::LayerMask__Class>(type_info(), "UnityEngine", "LayerMask");
        }
        inline app::LayerMask* create() {
            return il2cpp::create_object<app::LayerMask>(get_class());
        }
        inline app::LayerMask__Boxed* box(app::LayerMask value) {
            return il2cpp::box_value<app::LayerMask__Boxed>(get_class(), value);
        }
    } // namespace LayerMask
} // namespace app::classes::types
