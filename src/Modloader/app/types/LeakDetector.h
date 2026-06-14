#pragma once
#include <Modloader/app/structs/LeakDetector.h>
#include <Modloader/app/structs/LeakDetector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeakDetector {
        inline app::LeakDetector__Class** type_info() {
            static app::LeakDetector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeakDetector__Class**)(modloader::win::memory::resolve_rva(0x04743250));
            }
            return cache;
        }
        inline app::LeakDetector__Class* get_class() {
            return il2cpp::get_class<app::LeakDetector__Class>(type_info(), "", "LeakDetector");
        }
        inline app::LeakDetector* create() {
            return il2cpp::create_object<app::LeakDetector>(get_class());
        }
    } // namespace LeakDetector
} // namespace app::classes::types
