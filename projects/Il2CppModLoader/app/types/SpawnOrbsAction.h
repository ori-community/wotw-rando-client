#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpawnOrbsAction {
        namespace {
            app::SpawnOrbsAction__Class* type_info_ref = nullptr;
        }
        app::SpawnOrbsAction__Class** type_info = &type_info_ref;
        inline app::SpawnOrbsAction__Class* get_class() {
            return il2cpp::get_class<app::SpawnOrbsAction__Class>(type_info, "", "SpawnOrbsAction");
        }
        inline app::SpawnOrbsAction* create() {
            return il2cpp::create_object<app::SpawnOrbsAction>(get_class());
        }
    } // namespace SpawnOrbsAction
} // namespace app::classes::types
