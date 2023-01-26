#pragma once
#include <Modloader/app/structs/Browser_c_DisplayClass140_0.h>
#include <Modloader/app/structs/Browser_c_DisplayClass140_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Browser_c_DisplayClass140_0 {
        inline app::Browser_c_DisplayClass140_0__Class** type_info() {
            static app::Browser_c_DisplayClass140_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Browser_c_DisplayClass140_0__Class**)(modloader::win::memory::resolve_rva(0x047034A0));
            }
            return cache;
        }
        inline app::Browser_c_DisplayClass140_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_c_DisplayClass140_0__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Browser", "<>c__DisplayClass140_0");
        }
        inline app::Browser_c_DisplayClass140_0* create() {
            return il2cpp::create_object<app::Browser_c_DisplayClass140_0>(get_class());
        }
    } // namespace Browser_c_DisplayClass140_0
} // namespace app::classes::types
