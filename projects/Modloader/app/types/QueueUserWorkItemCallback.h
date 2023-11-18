#pragma once
#include <Modloader/app/structs/QueueUserWorkItemCallback.h>
#include <Modloader/app/structs/QueueUserWorkItemCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QueueUserWorkItemCallback {
        inline app::QueueUserWorkItemCallback__Class** type_info() {
            static app::QueueUserWorkItemCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QueueUserWorkItemCallback__Class**)(modloader::win::memory::resolve_rva(0x04770E00));
            }
            return cache;
        }
        inline app::QueueUserWorkItemCallback__Class* get_class() {
            return il2cpp::get_class<app::QueueUserWorkItemCallback__Class>(type_info(), "System.Threading", "QueueUserWorkItemCallback");
        }
        inline app::QueueUserWorkItemCallback* create() {
            return il2cpp::create_object<app::QueueUserWorkItemCallback>(get_class());
        }
    } // namespace QueueUserWorkItemCallback
} // namespace app::classes::types
