#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionCheckerPlugin {
        namespace {
            app::PositionCheckerPlugin__Class* type_info_ref = nullptr;
        }
        app::PositionCheckerPlugin__Class** type_info = &type_info_ref;
        inline app::PositionCheckerPlugin__Class* get_class() {
            return il2cpp::get_class<app::PositionCheckerPlugin__Class>(type_info, "", "PositionCheckerPlugin");
        }
        inline app::PositionCheckerPlugin* create() {
            return il2cpp::create_object<app::PositionCheckerPlugin>(get_class());
        }
    } // namespace PositionCheckerPlugin
} // namespace app::classes::types
