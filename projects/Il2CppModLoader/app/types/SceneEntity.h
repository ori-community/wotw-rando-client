#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneEntity {
        namespace {
            app::SceneEntity__Class* type_info_ref = nullptr;
        }
        app::SceneEntity__Class** type_info = &type_info_ref;
        inline app::SceneEntity__Class* get_class() {
            return il2cpp::get_class<app::SceneEntity__Class>(type_info, "Moon.Timeline", "SceneEntity");
        }
        inline app::SceneEntity* create() {
            return il2cpp::create_object<app::SceneEntity>(get_class());
        }
    } // namespace SceneEntity
} // namespace app::classes::types
