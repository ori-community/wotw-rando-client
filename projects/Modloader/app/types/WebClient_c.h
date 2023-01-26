#pragma once
#include <Modloader/app/structs/WebClient_c.h>
#include <Modloader/app/structs/WebClient_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebClient_c {
        inline app::WebClient_c__Class** type_info() {
            static app::WebClient_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebClient_c__Class**)(modloader::win::memory::resolve_rva(0x04703B18));
            }
            return cache;
        }
        inline app::WebClient_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_c__Class>(type_info(), "System.Net", "WebClient", "<>c");
        }
        inline app::WebClient_c* create() {
            return il2cpp::create_object<app::WebClient_c>(get_class());
        }
    } // namespace WebClient_c
} // namespace app::classes::types
