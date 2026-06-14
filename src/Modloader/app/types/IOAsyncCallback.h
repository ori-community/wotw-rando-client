#pragma once
#include <Modloader/app/structs/IOAsyncCallback.h>
#include <Modloader/app/structs/IOAsyncCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IOAsyncCallback {
        inline app::IOAsyncCallback__Class** type_info() {
            static app::IOAsyncCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IOAsyncCallback__Class**)(modloader::win::memory::resolve_rva(0x047971C8));
            }
            return cache;
        }
        inline app::IOAsyncCallback__Class* get_class() {
            return il2cpp::get_class<app::IOAsyncCallback__Class>(type_info(), "System", "IOAsyncCallback");
        }
        inline app::IOAsyncCallback* create() {
            return il2cpp::create_object<app::IOAsyncCallback>(get_class());
        }
    } // namespace IOAsyncCallback
} // namespace app::classes::types
