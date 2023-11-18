#pragma once
#include <Modloader/app/structs/EventProvider_c_DisplayClass44_0.h>
#include <Modloader/app/structs/EventProvider_c_DisplayClass44_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventProvider_c_DisplayClass44_0 {
        inline app::EventProvider_c_DisplayClass44_0__Class** type_info() {
            static app::EventProvider_c_DisplayClass44_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventProvider_c_DisplayClass44_0__Class**)(modloader::win::memory::resolve_rva(0x04720D38));
            }
            return cache;
        }
        inline app::EventProvider_c_DisplayClass44_0__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_c_DisplayClass44_0__Class>(type_info(), "System.Diagnostics.Tracing", "EventProvider", "<>c__DisplayClass44_0");
        }
        inline app::EventProvider_c_DisplayClass44_0* create() {
            return il2cpp::create_object<app::EventProvider_c_DisplayClass44_0>(get_class());
        }
    } // namespace EventProvider_c_DisplayClass44_0
} // namespace app::classes::types
