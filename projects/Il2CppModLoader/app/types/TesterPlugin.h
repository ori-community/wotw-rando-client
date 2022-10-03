#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TesterPlugin {
        namespace {
            app::TesterPlugin__Class* type_info_ref = nullptr;
        }
        app::TesterPlugin__Class** type_info = &type_info_ref;
        inline app::TesterPlugin__Class* get_class() {
            return il2cpp::get_class<app::TesterPlugin__Class>(type_info, "", "TesterPlugin");
        }
        inline app::TesterPlugin* create() {
            return il2cpp::create_object<app::TesterPlugin>(get_class());
        }
    } // namespace TesterPlugin
} // namespace app::classes::types
