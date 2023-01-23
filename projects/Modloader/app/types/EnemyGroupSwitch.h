#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnemyGroupSwitch__Class.h>
#include <Modloader/app/structs/EnemyGroupSwitch.h>

namespace app::classes::types {
    namespace EnemyGroupSwitch {
        namespace {
            inline app::EnemyGroupSwitch__Class* type_info_ref = nullptr;
        }
        inline app::EnemyGroupSwitch__Class** type_info = &type_info_ref;
        inline app::EnemyGroupSwitch__Class* get_class() {
            return il2cpp::get_class<app::EnemyGroupSwitch__Class>(type_info, "", "EnemyGroupSwitch");
        }
        inline app::EnemyGroupSwitch* create() {
            return il2cpp::create_object<app::EnemyGroupSwitch>(get_class());
        }
    } // namespace EnemyGroupSwitch
} // namespace app::classes::types
