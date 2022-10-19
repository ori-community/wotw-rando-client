#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpitterEnemyPlaceholder {
        namespace {
            inline app::SpitterEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SpitterEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::SpitterEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyPlaceholder__Class>(type_info, "", "SpitterEnemyPlaceholder");
        }
        inline app::SpitterEnemyPlaceholder* create() {
            return il2cpp::create_object<app::SpitterEnemyPlaceholder>(get_class());
        }
    } // namespace SpitterEnemyPlaceholder
} // namespace app::classes::types
