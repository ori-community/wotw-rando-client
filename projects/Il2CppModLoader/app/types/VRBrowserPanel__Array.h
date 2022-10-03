#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRBrowserPanel__Array {
        namespace {
            app::VRBrowserPanel__Array__Class* type_info_ref = nullptr;
        }
        app::VRBrowserPanel__Array__Class** type_info = &type_info_ref;
        inline app::VRBrowserPanel__Array__Class* get_class() {
            return il2cpp::get_class<app::VRBrowserPanel__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "VRBrowserPanel[]");
        }
        inline app::VRBrowserPanel__Array* create() {
            return il2cpp::create_object<app::VRBrowserPanel__Array>(get_class());
        }
    } // namespace VRBrowserPanel__Array
} // namespace app::classes::types
