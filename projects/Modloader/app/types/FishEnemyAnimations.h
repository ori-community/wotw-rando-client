#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishEnemyAnimations {
        namespace {
            inline app::FishEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::FishEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::FishEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::FishEnemyAnimations__Class>(type_info, "", "FishEnemyAnimations");
        }
        inline app::FishEnemyAnimations* create() {
            return il2cpp::create_object<app::FishEnemyAnimations>(get_class());
        }
    } // namespace FishEnemyAnimations
} // namespace app::classes::types
