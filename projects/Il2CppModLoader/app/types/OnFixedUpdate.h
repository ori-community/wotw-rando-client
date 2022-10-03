#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnFixedUpdate {
        namespace {
            app::OnFixedUpdate__Class* type_info_ref = nullptr;
        }
        app::OnFixedUpdate__Class** type_info = &type_info_ref;
        inline app::OnFixedUpdate__Class* get_class() {
            return il2cpp::get_class<app::OnFixedUpdate__Class>(type_info, "Moon.InteractionGraph", "OnFixedUpdate");
        }
        inline app::OnFixedUpdate* create() {
            return il2cpp::create_object<app::OnFixedUpdate>(get_class());
        }
    } // namespace OnFixedUpdate
} // namespace app::classes::types
