#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Door_1 {
        namespace {
            app::Door_1__Class* type_info_ref = nullptr;
        }
        app::Door_1__Class** type_info = &type_info_ref;
        inline app::Door_1__Class* get_class() {
            return il2cpp::get_class<app::Door_1__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Door");
        }
        inline app::Door_1* create() {
            return il2cpp::create_object<app::Door_1>(get_class());
        }
    } // namespace Door_1
} // namespace app::classes::types
