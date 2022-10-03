#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayAnimation {
        namespace {
            app::PlayAnimation__Class* type_info_ref = nullptr;
        }
        app::PlayAnimation__Class** type_info = &type_info_ref;
        inline app::PlayAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimation__Class>(type_info, "", "PlayAnimation");
        }
        inline app::PlayAnimation* create() {
            return il2cpp::create_object<app::PlayAnimation>(get_class());
        }
    } // namespace PlayAnimation
} // namespace app::classes::types
