#pragma once
#include <Modloader/app/structs/CFNetwork_c_DisplayClass13_0.h>
#include <Modloader/app/structs/CFNetwork_c_DisplayClass13_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFNetwork_c_DisplayClass13_0 {
        inline app::CFNetwork_c_DisplayClass13_0__Class** type_info() {
            static app::CFNetwork_c_DisplayClass13_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFNetwork_c_DisplayClass13_0__Class**)(modloader::win::memory::resolve_rva(0x047955D0));
            }
            return cache;
        }
        inline app::CFNetwork_c_DisplayClass13_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CFNetwork_c_DisplayClass13_0__Class>(type_info(), "Mono.Net", "CFNetwork", "<>c__DisplayClass13_0");
        }
        inline app::CFNetwork_c_DisplayClass13_0* create() {
            return il2cpp::create_object<app::CFNetwork_c_DisplayClass13_0>(get_class());
        }
    } // namespace CFNetwork_c_DisplayClass13_0
} // namespace app::classes::types
