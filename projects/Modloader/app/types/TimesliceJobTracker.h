#pragma once
#include <Modloader/app/structs/TimesliceJobTracker.h>
#include <Modloader/app/structs/TimesliceJobTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceJobTracker {
        inline app::TimesliceJobTracker__Class** type_info() {
            static app::TimesliceJobTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimesliceJobTracker__Class**)(modloader::win::memory::resolve_rva(0x0470E8F8));
            }
            return cache;
        }
        inline app::TimesliceJobTracker__Class* get_class() {
            return il2cpp::get_class<app::TimesliceJobTracker__Class>(type_info(), "", "TimesliceJobTracker");
        }
        inline app::TimesliceJobTracker* create() {
            return il2cpp::create_object<app::TimesliceJobTracker>(get_class());
        }
    } // namespace TimesliceJobTracker
} // namespace app::classes::types
