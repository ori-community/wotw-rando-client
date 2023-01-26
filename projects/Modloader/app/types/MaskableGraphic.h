#pragma once
#include <Modloader/app/structs/MaskableGraphic.h>
#include <Modloader/app/structs/MaskableGraphic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskableGraphic {
        inline app::MaskableGraphic__Class** type_info() {
            static app::MaskableGraphic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaskableGraphic__Class**)(modloader::win::memory::resolve_rva(0x04799748));
            }
            return cache;
        }
        inline app::MaskableGraphic__Class* get_class() {
            return il2cpp::get_class<app::MaskableGraphic__Class>(type_info(), "UnityEngine.UI", "MaskableGraphic");
        }
        inline app::MaskableGraphic* create() {
            return il2cpp::create_object<app::MaskableGraphic>(get_class());
        }
    } // namespace MaskableGraphic
} // namespace app::classes::types
