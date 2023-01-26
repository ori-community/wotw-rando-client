#pragma once
#include <Modloader/app/structs/IPEndPoint__Array.h>
#include <Modloader/app/structs/IPEndPoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPEndPoint__Array {
        inline app::IPEndPoint__Array__Class** type_info() {
            static app::IPEndPoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPEndPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04791638));
            }
            return cache;
        }
        inline app::IPEndPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::IPEndPoint__Array__Class>(type_info(), "System.Net", "IPEndPoint[]");
        }
        inline app::IPEndPoint__Array* create() {
            return il2cpp::create_object<app::IPEndPoint__Array>(get_class());
        }
    } // namespace IPEndPoint__Array
} // namespace app::classes::types
