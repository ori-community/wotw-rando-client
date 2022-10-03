#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplayUISystem {
        namespace {
            app::GameplayUISystem__Class* type_info_ref = nullptr;
        }
        app::GameplayUISystem__Class** type_info = &type_info_ref;
        inline app::GameplayUISystem__Class* get_class() {
            return il2cpp::get_class<app::GameplayUISystem__Class>(type_info, "Moon.Timeline.Systems", "GameplayUISystem");
        }
        inline app::GameplayUISystem* create() {
            return il2cpp::create_object<app::GameplayUISystem>(get_class());
        }
    } // namespace GameplayUISystem
} // namespace app::classes::types
