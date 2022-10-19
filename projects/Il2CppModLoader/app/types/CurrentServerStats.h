#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CurrentServerStats {
        namespace {
            inline app::CurrentServerStats__Class* type_info_ref = nullptr;
        }
        inline app::CurrentServerStats__Class** type_info = &type_info_ref;
        inline app::CurrentServerStats__Class* get_class() {
            return il2cpp::get_class<app::CurrentServerStats__Class>(type_info, "PlayFab.MultiplayerModels", "CurrentServerStats");
        }
        inline app::CurrentServerStats* create() {
            return il2cpp::create_object<app::CurrentServerStats>(get_class());
        }
    } // namespace CurrentServerStats
} // namespace app::classes::types
