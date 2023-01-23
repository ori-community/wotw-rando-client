#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FPSBrowserUI__Class.h>
#include <Modloader/app/structs/FPSBrowserUI.h>

namespace app::classes::types {
    namespace FPSBrowserUI {
        namespace {
            inline app::FPSBrowserUI__Class* type_info_ref = nullptr;
        }
        inline app::FPSBrowserUI__Class** type_info = &type_info_ref;
        inline app::FPSBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::FPSBrowserUI__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "FPSBrowserUI");
        }
        inline app::FPSBrowserUI* create() {
            return il2cpp::create_object<app::FPSBrowserUI>(get_class());
        }
    } // namespace FPSBrowserUI
} // namespace app::classes::types
