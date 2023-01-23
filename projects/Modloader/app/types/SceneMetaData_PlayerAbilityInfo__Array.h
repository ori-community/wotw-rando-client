#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneMetaData_PlayerAbilityInfo__Array__Class.h>
#include <Modloader/app/structs/SceneMetaData_PlayerAbilityInfo__Array.h>

namespace app::classes::types {
    namespace SceneMetaData_PlayerAbilityInfo__Array {
        namespace {
            inline app::SceneMetaData_PlayerAbilityInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneMetaData_PlayerAbilityInfo__Array__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_PlayerAbilityInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData_PlayerAbilityInfo__Array__Class>(type_info, "", "SceneMetaData+PlayerAbilityInfo[]");
        }
        inline app::SceneMetaData_PlayerAbilityInfo__Array* create() {
            return il2cpp::create_object<app::SceneMetaData_PlayerAbilityInfo__Array>(get_class());
        }
    } // namespace SceneMetaData_PlayerAbilityInfo__Array
} // namespace app::classes::types
