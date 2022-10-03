#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SlugController {
        namespace {
            app::SlugController__Class* type_info_ref = nullptr;
        }
        app::SlugController__Class** type_info = &type_info_ref;
        inline app::SlugController__Class* get_class() {
            return il2cpp::get_class<app::SlugController__Class>(type_info, "", "SlugController");
        }
        inline app::SlugController* create() {
            return il2cpp::create_object<app::SlugController>(get_class());
        }
    } // namespace SlugController
} // namespace app::classes::types
