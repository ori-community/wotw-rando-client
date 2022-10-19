#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIBrowserUI {
        namespace {
            inline app::GUIBrowserUI__Class* type_info_ref = nullptr;
        }
        inline app::GUIBrowserUI__Class** type_info = &type_info_ref;
        inline app::GUIBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::GUIBrowserUI__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "GUIBrowserUI");
        }
        inline app::GUIBrowserUI* create() {
            return il2cpp::create_object<app::GUIBrowserUI>(get_class());
        }
    } // namespace GUIBrowserUI
} // namespace app::classes::types
