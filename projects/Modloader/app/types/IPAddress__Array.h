#pragma once
#include <Modloader/app/structs/IPAddress__Array.h>
#include <Modloader/app/structs/IPAddress__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPAddress__Array {
        inline app::IPAddress__Array__Class** type_info() {
            static app::IPAddress__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPAddress__Array__Class**)(modloader::win::memory::resolve_rva(0x047415C0));
            }
            return cache;
        }
        inline app::IPAddress__Array__Class* get_class() {
            return il2cpp::get_class<app::IPAddress__Array__Class>(type_info(), "System.Net", "IPAddress[]");
        }
        inline app::IPAddress__Array* create() {
            return il2cpp::create_object<app::IPAddress__Array>(get_class());
        }
    } // namespace IPAddress__Array
} // namespace app::classes::types
