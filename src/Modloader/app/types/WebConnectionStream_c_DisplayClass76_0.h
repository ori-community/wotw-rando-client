#pragma once
#include <Modloader/app/structs/WebConnectionStream_c_DisplayClass76_0.h>
#include <Modloader/app/structs/WebConnectionStream_c_DisplayClass76_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebConnectionStream_c_DisplayClass76_0 {
        inline app::WebConnectionStream_c_DisplayClass76_0__Class** type_info() {
            static app::WebConnectionStream_c_DisplayClass76_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebConnectionStream_c_DisplayClass76_0__Class**)(modloader::win::memory::resolve_rva(0x0471FC40));
            }
            return cache;
        }
        inline app::WebConnectionStream_c_DisplayClass76_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebConnectionStream_c_DisplayClass76_0__Class>(type_info(), "System.Net", "WebConnectionStream", "<>c__DisplayClass76_0");
        }
        inline app::WebConnectionStream_c_DisplayClass76_0* create() {
            return il2cpp::create_object<app::WebConnectionStream_c_DisplayClass76_0>(get_class());
        }
    } // namespace WebConnectionStream_c_DisplayClass76_0
} // namespace app::classes::types
