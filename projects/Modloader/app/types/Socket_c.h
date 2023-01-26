#pragma once
#include <Modloader/app/structs/Socket_c.h>
#include <Modloader/app/structs/Socket_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Socket_c {
        inline app::Socket_c__Class** type_info() {
            static app::Socket_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Socket_c__Class**)(modloader::win::memory::resolve_rva(0x04735740));
            }
            return cache;
        }
        inline app::Socket_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Socket_c__Class>(type_info(), "System.Net.Sockets", "Socket", "<>c");
        }
        inline app::Socket_c* create() {
            return il2cpp::create_object<app::Socket_c>(get_class());
        }
    } // namespace Socket_c
} // namespace app::classes::types
