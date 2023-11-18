#pragma once
#include <Modloader/app/structs/XTaskQueue.h>
#include <Modloader/app/structs/XTaskQueue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XTaskQueue {
        inline app::XTaskQueue__Class** type_info() {
            static app::XTaskQueue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XTaskQueue__Class**)(modloader::win::memory::resolve_rva(0x047690D8));
            }
            return cache;
        }
        inline app::XTaskQueue__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueue__Class>(type_info(), "XGamingRuntime.Interop", "XTaskQueue");
        }
        inline app::XTaskQueue* create() {
            return il2cpp::create_object<app::XTaskQueue>(get_class());
        }
    } // namespace XTaskQueue
} // namespace app::classes::types
