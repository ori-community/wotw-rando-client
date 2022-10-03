#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_PlayerAbilityInfo__Array {
        namespace {
            app::SceneMetaData_PlayerAbilityInfo__Array__Class* type_info_ref = nullptr;
        }
        app::SceneMetaData_PlayerAbilityInfo__Array__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_PlayerAbilityInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData_PlayerAbilityInfo__Array__Class>(type_info, "", "SceneMetaData+PlayerAbilityInfo[]");
        }
        inline app::SceneMetaData_PlayerAbilityInfo__Array* create() {
            return il2cpp::create_object<app::SceneMetaData_PlayerAbilityInfo__Array>(get_class());
        }
    } // namespace SceneMetaData_PlayerAbilityInfo__Array
} // namespace app::classes::types
