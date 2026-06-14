#pragma once
#include <Modloader/app/structs/SpiritGrenadeCrushDetector.h>
#include <Modloader/app/structs/SpiritGrenadeCrushDetector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritGrenadeCrushDetector {
        inline app::SpiritGrenadeCrushDetector__Class** type_info() {
            static app::SpiritGrenadeCrushDetector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritGrenadeCrushDetector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritGrenadeCrushDetector__Class* get_class() {
            return il2cpp::get_class<app::SpiritGrenadeCrushDetector__Class>(type_info(), "", "SpiritGrenadeCrushDetector");
        }
        inline app::SpiritGrenadeCrushDetector* create() {
            return il2cpp::create_object<app::SpiritGrenadeCrushDetector>(get_class());
        }
    } // namespace SpiritGrenadeCrushDetector
} // namespace app::classes::types
