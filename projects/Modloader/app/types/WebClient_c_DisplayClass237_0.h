#pragma once
#include <Modloader/app/structs/WebClient_c_DisplayClass237_0.h>
#include <Modloader/app/structs/WebClient_c_DisplayClass237_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebClient_c_DisplayClass237_0 {
        inline app::WebClient_c_DisplayClass237_0__Class** type_info() {
            static app::WebClient_c_DisplayClass237_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebClient_c_DisplayClass237_0__Class**)(modloader::win::memory::resolve_rva(0x04747970));
            }
            return cache;
        }
        inline app::WebClient_c_DisplayClass237_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_c_DisplayClass237_0__Class>(type_info(), "System.Net", "WebClient", "<>c__DisplayClass237_0");
        }
        inline app::WebClient_c_DisplayClass237_0* create() {
            return il2cpp::create_object<app::WebClient_c_DisplayClass237_0>(get_class());
        }
    } // namespace WebClient_c_DisplayClass237_0
} // namespace app::classes::types
