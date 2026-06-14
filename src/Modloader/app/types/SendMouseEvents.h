#pragma once
#include <Modloader/app/structs/SendMouseEvents.h>
#include <Modloader/app/structs/SendMouseEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendMouseEvents {
        inline app::SendMouseEvents__Class** type_info() {
            static app::SendMouseEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SendMouseEvents__Class**)(modloader::win::memory::resolve_rva(0x04730C78));
            }
            return cache;
        }
        inline app::SendMouseEvents__Class* get_class() {
            return il2cpp::get_class<app::SendMouseEvents__Class>(type_info(), "UnityEngine", "SendMouseEvents");
        }
        inline app::SendMouseEvents* create() {
            return il2cpp::create_object<app::SendMouseEvents>(get_class());
        }
    } // namespace SendMouseEvents
} // namespace app::classes::types
