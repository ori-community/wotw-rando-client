#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerEnemyPlaceholderMarker {
        namespace {
            inline app::MinerEnemyPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::MinerEnemyPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::MinerEnemyPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::MinerEnemyPlaceholderMarker__Class>(type_info, "", "MinerEnemyPlaceholderMarker");
        }
        inline app::MinerEnemyPlaceholderMarker* create() {
            return il2cpp::create_object<app::MinerEnemyPlaceholderMarker>(get_class());
        }
    } // namespace MinerEnemyPlaceholderMarker
} // namespace app::classes::types
