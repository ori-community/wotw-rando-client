#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRBrowserPanel {
        namespace {
            app::VRBrowserPanel__Class* type_info_ref = nullptr;
        }
        app::VRBrowserPanel__Class** type_info = &type_info_ref;
        inline app::VRBrowserPanel__Class* get_class() {
            return il2cpp::get_class<app::VRBrowserPanel__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "VRBrowserPanel");
        }
        inline app::VRBrowserPanel* create() {
            return il2cpp::create_object<app::VRBrowserPanel>(get_class());
        }
        inline app::VRBrowserPanel__Array* create_array(int size) {
            return il2cpp::array_new<app::VRBrowserPanel__Array>(get_class(), size);
        }
        inline app::VRBrowserPanel__Array* create_array(const std::vector<app::VRBrowserPanel*>& items) {
            return il2cpp::array_new<app::VRBrowserPanel__Array>(get_class(), items);
        }
    } // namespace VRBrowserPanel
} // namespace app::classes::types
