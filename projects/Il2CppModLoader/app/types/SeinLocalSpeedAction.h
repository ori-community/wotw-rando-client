#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLocalSpeedAction {
        namespace {
            app::SeinLocalSpeedAction__Class* type_info_ref = nullptr;
        }
        app::SeinLocalSpeedAction__Class** type_info = &type_info_ref;
        inline app::SeinLocalSpeedAction__Class* get_class() {
            return il2cpp::get_class<app::SeinLocalSpeedAction__Class>(type_info, "", "SeinLocalSpeedAction");
        }
        inline app::SeinLocalSpeedAction* create() {
            return il2cpp::create_object<app::SeinLocalSpeedAction>(get_class());
        }
    } // namespace SeinLocalSpeedAction
} // namespace app::classes::types
