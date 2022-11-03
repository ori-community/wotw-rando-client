#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeakDetector {
        inline app::LeakDetector__Class** type_info = (app::LeakDetector__Class**)(modloader::win::memory::resolve_rva(0x04743250));
        inline app::LeakDetector__Class* get_class() {
            return il2cpp::get_class<app::LeakDetector__Class>(type_info, "", "LeakDetector");
        }
        inline app::LeakDetector* create() {
            return il2cpp::create_object<app::LeakDetector>(get_class());
        }
    } // namespace LeakDetector
} // namespace app::classes::types
