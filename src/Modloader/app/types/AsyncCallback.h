#pragma once
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/AsyncCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncCallback {
        inline app::AsyncCallback__Class** type_info() {
            static app::AsyncCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncCallback__Class**)(modloader::win::memory::resolve_rva(0x0470B560));
            }
            return cache;
        }
        inline app::AsyncCallback__Class* get_class() {
            return il2cpp::get_class<app::AsyncCallback__Class>(type_info(), "System", "AsyncCallback");
        }
        inline app::AsyncCallback* create() {
            return il2cpp::create_object<app::AsyncCallback>(get_class());
        }
    } // namespace AsyncCallback
} // namespace app::classes::types
