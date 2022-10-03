#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleController {
        namespace {
            app::SimpleController__Class* type_info_ref = nullptr;
        }
        app::SimpleController__Class** type_info = &type_info_ref;
        inline app::SimpleController__Class* get_class() {
            return il2cpp::get_class<app::SimpleController__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SimpleController");
        }
        inline app::SimpleController* create() {
            return il2cpp::create_object<app::SimpleController>(get_class());
        }
    } // namespace SimpleController
} // namespace app::classes::types
