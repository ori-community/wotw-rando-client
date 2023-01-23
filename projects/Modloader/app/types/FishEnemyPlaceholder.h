#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FishEnemyPlaceholder__Class.h>
#include <Modloader/app/structs/FishEnemyPlaceholder.h>

namespace app::classes::types {
    namespace FishEnemyPlaceholder {
        namespace {
            inline app::FishEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::FishEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::FishEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::FishEnemyPlaceholder__Class>(type_info, "", "FishEnemyPlaceholder");
        }
        inline app::FishEnemyPlaceholder* create() {
            return il2cpp::create_object<app::FishEnemyPlaceholder>(get_class());
        }
    } // namespace FishEnemyPlaceholder
} // namespace app::classes::types
