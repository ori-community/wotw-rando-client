#pragma once
#include <Modloader/app/structs/Bootstrap.h>
#include <Modloader/app/structs/Bootstrap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bootstrap {
        inline app::Bootstrap__Class** type_info() {
            static app::Bootstrap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bootstrap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bootstrap__Class* get_class() {
            return il2cpp::get_class<app::Bootstrap__Class>(type_info(), "", "Bootstrap");
        }
        inline app::Bootstrap* create() {
            return il2cpp::create_object<app::Bootstrap>(get_class());
        }
    } // namespace Bootstrap
} // namespace app::classes::types
