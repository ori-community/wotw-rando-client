#pragma once
#include <Modloader/app/structs/Cookie_c.h>
#include <Modloader/app/structs/Cookie_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Cookie_c {
        inline app::Cookie_c__Class** type_info() {
            static app::Cookie_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Cookie_c__Class**)(modloader::win::memory::resolve_rva(0x0471EAE0));
            }
            return cache;
        }
        inline app::Cookie_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Cookie_c__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Cookie", "<>c");
        }
        inline app::Cookie_c* create() {
            return il2cpp::create_object<app::Cookie_c>(get_class());
        }
    } // namespace Cookie_c
} // namespace app::classes::types
