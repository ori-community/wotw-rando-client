#pragma once
#include <Modloader/app/structs/TimerCallback.h>
#include <Modloader/app/structs/TimerCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerCallback {
        inline app::TimerCallback__Class** type_info() {
            static app::TimerCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimerCallback__Class**)(modloader::win::memory::resolve_rva(0x04746068));
            }
            return cache;
        }
        inline app::TimerCallback__Class* get_class() {
            return il2cpp::get_class<app::TimerCallback__Class>(type_info(), "System.Threading", "TimerCallback");
        }
        inline app::TimerCallback* create() {
            return il2cpp::create_object<app::TimerCallback>(get_class());
        }
    } // namespace TimerCallback
} // namespace app::classes::types
