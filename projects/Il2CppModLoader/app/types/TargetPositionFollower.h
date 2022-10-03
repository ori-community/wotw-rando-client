#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetPositionFollower {
        namespace {
            app::TargetPositionFollower__Class* type_info_ref = nullptr;
        }
        app::TargetPositionFollower__Class** type_info = &type_info_ref;
        inline app::TargetPositionFollower__Class* get_class() {
            return il2cpp::get_class<app::TargetPositionFollower__Class>(type_info, "", "TargetPositionFollower");
        }
        inline app::TargetPositionFollower* create() {
            return il2cpp::create_object<app::TargetPositionFollower>(get_class());
        }
    } // namespace TargetPositionFollower
} // namespace app::classes::types
