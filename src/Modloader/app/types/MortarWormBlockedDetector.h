#pragma once
#include <Modloader/app/structs/MortarWormBlockedDetector.h>
#include <Modloader/app/structs/MortarWormBlockedDetector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWormBlockedDetector {
        inline app::MortarWormBlockedDetector__Class** type_info() {
            static app::MortarWormBlockedDetector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarWormBlockedDetector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarWormBlockedDetector__Class* get_class() {
            return il2cpp::get_class<app::MortarWormBlockedDetector__Class>(type_info(), "", "MortarWormBlockedDetector");
        }
        inline app::MortarWormBlockedDetector* create() {
            return il2cpp::create_object<app::MortarWormBlockedDetector>(get_class());
        }
    } // namespace MortarWormBlockedDetector
} // namespace app::classes::types
