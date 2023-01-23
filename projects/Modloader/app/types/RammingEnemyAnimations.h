#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingEnemyAnimations__Class.h>
#include <Modloader/app/structs/RammingEnemyAnimations.h>

namespace app::classes::types {
    namespace RammingEnemyAnimations {
        namespace {
            inline app::RammingEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::RammingEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::RammingEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyAnimations__Class>(type_info, "", "RammingEnemyAnimations");
        }
        inline app::RammingEnemyAnimations* create() {
            return il2cpp::create_object<app::RammingEnemyAnimations>(get_class());
        }
    } // namespace RammingEnemyAnimations
} // namespace app::classes::types
