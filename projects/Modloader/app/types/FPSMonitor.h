#pragma once
#include <Modloader/app/structs/FPSMonitor.h>
#include <Modloader/app/structs/FPSMonitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSMonitor {
        inline app::FPSMonitor__Class** type_info() {
            static app::FPSMonitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FPSMonitor__Class**)(modloader::win::memory::resolve_rva(0x04798D30));
            }
            return cache;
        }
        inline app::FPSMonitor__Class* get_class() {
            return il2cpp::get_class<app::FPSMonitor__Class>(type_info(), "", "FPSMonitor");
        }
        inline app::FPSMonitor* create() {
            return il2cpp::create_object<app::FPSMonitor>(get_class());
        }
    } // namespace FPSMonitor
} // namespace app::classes::types
