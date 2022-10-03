#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SnowBall {
        namespace {
            app::SnowBall__Class* type_info_ref = nullptr;
        }
        app::SnowBall__Class** type_info = &type_info_ref;
        inline app::SnowBall__Class* get_class() {
            return il2cpp::get_class<app::SnowBall__Class>(type_info, "", "SnowBall");
        }
        inline app::SnowBall* create() {
            return il2cpp::create_object<app::SnowBall>(get_class());
        }
    } // namespace SnowBall
} // namespace app::classes::types
