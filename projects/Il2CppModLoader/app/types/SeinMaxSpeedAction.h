#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinMaxSpeedAction {
        namespace {
            app::SeinMaxSpeedAction__Class* type_info_ref = nullptr;
        }
        app::SeinMaxSpeedAction__Class** type_info = &type_info_ref;
        inline app::SeinMaxSpeedAction__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxSpeedAction__Class>(type_info, "", "SeinMaxSpeedAction");
        }
        inline app::SeinMaxSpeedAction* create() {
            return il2cpp::create_object<app::SeinMaxSpeedAction>(get_class());
        }
    } // namespace SeinMaxSpeedAction
} // namespace app::classes::types
