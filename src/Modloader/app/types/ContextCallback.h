#pragma once
#include <Modloader/app/structs/ContextCallback.h>
#include <Modloader/app/structs/ContextCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContextCallback {
        inline app::ContextCallback__Class** type_info() {
            static app::ContextCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContextCallback__Class**)(modloader::win::memory::resolve_rva(0x04711530));
            }
            return cache;
        }
        inline app::ContextCallback__Class* get_class() {
            return il2cpp::get_class<app::ContextCallback__Class>(type_info(), "System.Threading", "ContextCallback");
        }
        inline app::ContextCallback* create() {
            return il2cpp::create_object<app::ContextCallback>(get_class());
        }
    } // namespace ContextCallback
} // namespace app::classes::types
