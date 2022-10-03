#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RespawningPlaceholderSpawnAction {
        namespace {
            app::RespawningPlaceholderSpawnAction__Class* type_info_ref = nullptr;
        }
        app::RespawningPlaceholderSpawnAction__Class** type_info = &type_info_ref;
        inline app::RespawningPlaceholderSpawnAction__Class* get_class() {
            return il2cpp::get_class<app::RespawningPlaceholderSpawnAction__Class>(type_info, "", "RespawningPlaceholderSpawnAction");
        }
        inline app::RespawningPlaceholderSpawnAction* create() {
            return il2cpp::create_object<app::RespawningPlaceholderSpawnAction>(get_class());
        }
    } // namespace RespawningPlaceholderSpawnAction
} // namespace app::classes::types
