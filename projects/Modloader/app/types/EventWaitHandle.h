#pragma once
#include <Modloader/app/structs/EventWaitHandle.h>
#include <Modloader/app/structs/EventWaitHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventWaitHandle {
        inline app::EventWaitHandle__Class** type_info() {
            static app::EventWaitHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventWaitHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::EventWaitHandle__Class>(type_info(), "System.Threading", "EventWaitHandle");
        }
        inline app::EventWaitHandle* create() {
            return il2cpp::create_object<app::EventWaitHandle>(get_class());
        }
    } // namespace EventWaitHandle
} // namespace app::classes::types
