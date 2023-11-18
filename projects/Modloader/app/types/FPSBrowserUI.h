#pragma once
#include <Modloader/app/structs/FPSBrowserUI.h>
#include <Modloader/app/structs/FPSBrowserUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSBrowserUI {
        inline app::FPSBrowserUI__Class** type_info() {
            static app::FPSBrowserUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSBrowserUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::FPSBrowserUI__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "FPSBrowserUI");
        }
        inline app::FPSBrowserUI* create() {
            return il2cpp::create_object<app::FPSBrowserUI>(get_class());
        }
    } // namespace FPSBrowserUI
} // namespace app::classes::types
