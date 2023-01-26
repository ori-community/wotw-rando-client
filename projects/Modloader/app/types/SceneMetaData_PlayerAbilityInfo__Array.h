#pragma once
#include <Modloader/app/structs/SceneMetaData_PlayerAbilityInfo__Array.h>
#include <Modloader/app/structs/SceneMetaData_PlayerAbilityInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_PlayerAbilityInfo__Array {
        inline app::SceneMetaData_PlayerAbilityInfo__Array__Class** type_info() {
            static app::SceneMetaData_PlayerAbilityInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_PlayerAbilityInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_PlayerAbilityInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData_PlayerAbilityInfo__Array__Class>(type_info(), "", "SceneMetaData+PlayerAbilityInfo[]");
        }
        inline app::SceneMetaData_PlayerAbilityInfo__Array* create() {
            return il2cpp::create_object<app::SceneMetaData_PlayerAbilityInfo__Array>(get_class());
        }
    } // namespace SceneMetaData_PlayerAbilityInfo__Array
} // namespace app::classes::types
