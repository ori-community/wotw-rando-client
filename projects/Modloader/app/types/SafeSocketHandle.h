#pragma once
#include <Modloader/app/structs/SafeSocketHandle.h>
#include <Modloader/app/structs/SafeSocketHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeSocketHandle {
        inline app::SafeSocketHandle__Class** type_info() {
            static app::SafeSocketHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeSocketHandle__Class**)(modloader::win::memory::resolve_rva(0x0473C310));
            }
            return cache;
        }
        inline app::SafeSocketHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeSocketHandle__Class>(type_info(), "System.Net.Sockets", "SafeSocketHandle");
        }
        inline app::SafeSocketHandle* create() {
            return il2cpp::create_object<app::SafeSocketHandle>(get_class());
        }
    } // namespace SafeSocketHandle
} // namespace app::classes::types
