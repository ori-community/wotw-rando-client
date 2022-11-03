#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyPlaceholderMarker {
        namespace {
            inline app::EnemyPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::EnemyPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::EnemyPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::EnemyPlaceholderMarker__Class>(type_info, "", "EnemyPlaceholderMarker");
        }
        inline app::EnemyPlaceholderMarker* create() {
            return il2cpp::create_object<app::EnemyPlaceholderMarker>(get_class());
        }
    } // namespace EnemyPlaceholderMarker
} // namespace app::classes::types
