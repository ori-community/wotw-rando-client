#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameWorldArea_PlayerAbilityInfo__Array__Class.h>
#include <Modloader/app/structs/GameWorldArea_PlayerAbilityInfo__Array.h>

namespace app::classes::types {
    namespace GameWorldArea_PlayerAbilityInfo__Array {
        namespace {
            inline app::GameWorldArea_PlayerAbilityInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::GameWorldArea_PlayerAbilityInfo__Array__Class** type_info = &type_info_ref;
        inline app::GameWorldArea_PlayerAbilityInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::GameWorldArea_PlayerAbilityInfo__Array__Class>(type_info, "", "GameWorldArea+PlayerAbilityInfo[]");
        }
        inline app::GameWorldArea_PlayerAbilityInfo__Array* create() {
            return il2cpp::create_object<app::GameWorldArea_PlayerAbilityInfo__Array>(get_class());
        }
    } // namespace GameWorldArea_PlayerAbilityInfo__Array
} // namespace app::classes::types
