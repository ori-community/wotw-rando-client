#pragma once
#include <Modloader/app/structs/SystemClock.h>
#include <Modloader/app/structs/SystemClock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SystemClock {
        inline app::SystemClock__Class** type_info() {
            static app::SystemClock__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SystemClock__Class**)(modloader::win::memory::resolve_rva(0x0473AB50));
            }
            return cache;
        }
        inline app::SystemClock__Class* get_class() {
            return il2cpp::get_class<app::SystemClock__Class>(type_info(), "UnityEngine", "SystemClock");
        }
        inline app::SystemClock* create() {
            return il2cpp::create_object<app::SystemClock>(get_class());
        }
    } // namespace SystemClock
} // namespace app::classes::types
