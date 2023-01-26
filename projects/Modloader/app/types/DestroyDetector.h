#pragma once
#include <Modloader/app/structs/DestroyDetector.h>
#include <Modloader/app/structs/DestroyDetector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyDetector {
        inline app::DestroyDetector__Class** type_info() {
            static app::DestroyDetector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyDetector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyDetector__Class* get_class() {
            return il2cpp::get_class<app::DestroyDetector__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "DestroyDetector");
        }
        inline app::DestroyDetector* create() {
            return il2cpp::create_object<app::DestroyDetector>(get_class());
        }
    } // namespace DestroyDetector
} // namespace app::classes::types
