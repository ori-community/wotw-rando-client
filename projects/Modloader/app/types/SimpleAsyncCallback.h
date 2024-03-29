#pragma once
#include <Modloader/app/structs/SimpleAsyncCallback.h>
#include <Modloader/app/structs/SimpleAsyncCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleAsyncCallback {
        inline app::SimpleAsyncCallback__Class** type_info() {
            static app::SimpleAsyncCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleAsyncCallback__Class**)(modloader::win::memory::resolve_rva(0x047942D8));
            }
            return cache;
        }
        inline app::SimpleAsyncCallback__Class* get_class() {
            return il2cpp::get_class<app::SimpleAsyncCallback__Class>(type_info(), "System.Net", "SimpleAsyncCallback");
        }
        inline app::SimpleAsyncCallback* create() {
            return il2cpp::create_object<app::SimpleAsyncCallback>(get_class());
        }
    } // namespace SimpleAsyncCallback
} // namespace app::classes::types
