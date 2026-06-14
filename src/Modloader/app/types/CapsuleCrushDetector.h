#pragma once
#include <Modloader/app/structs/CapsuleCrushDetector.h>
#include <Modloader/app/structs/CapsuleCrushDetector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CapsuleCrushDetector {
        inline app::CapsuleCrushDetector__Class** type_info() {
            static app::CapsuleCrushDetector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CapsuleCrushDetector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CapsuleCrushDetector__Class* get_class() {
            return il2cpp::get_class<app::CapsuleCrushDetector__Class>(type_info(), "", "CapsuleCrushDetector");
        }
        inline app::CapsuleCrushDetector* create() {
            return il2cpp::create_object<app::CapsuleCrushDetector>(get_class());
        }
    } // namespace CapsuleCrushDetector
} // namespace app::classes::types
