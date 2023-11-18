#pragma once
#include <Modloader/app/structs/HandleCollector.h>
#include <Modloader/app/structs/HandleCollector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HandleCollector {
        inline app::HandleCollector__Class** type_info() {
            static app::HandleCollector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HandleCollector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HandleCollector__Class* get_class() {
            return il2cpp::get_class<app::HandleCollector__Class>(type_info(), "System.Runtime.InteropServices", "HandleCollector");
        }
        inline app::HandleCollector* create() {
            return il2cpp::create_object<app::HandleCollector>(get_class());
        }
    } // namespace HandleCollector
} // namespace app::classes::types
