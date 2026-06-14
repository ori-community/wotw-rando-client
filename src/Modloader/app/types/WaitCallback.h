#pragma once
#include <Modloader/app/structs/WaitCallback.h>
#include <Modloader/app/structs/WaitCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitCallback {
        inline app::WaitCallback__Class** type_info() {
            static app::WaitCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitCallback__Class**)(modloader::win::memory::resolve_rva(0x047686F8));
            }
            return cache;
        }
        inline app::WaitCallback__Class* get_class() {
            return il2cpp::get_class<app::WaitCallback__Class>(type_info(), "System.Threading", "WaitCallback");
        }
        inline app::WaitCallback* create() {
            return il2cpp::create_object<app::WaitCallback>(get_class());
        }
    } // namespace WaitCallback
} // namespace app::classes::types
