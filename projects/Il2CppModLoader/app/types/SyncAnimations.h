#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SyncAnimations {
        namespace {
            app::SyncAnimations__Class* type_info_ref = nullptr;
        }
        app::SyncAnimations__Class** type_info = &type_info_ref;
        inline app::SyncAnimations__Class* get_class() {
            return il2cpp::get_class<app::SyncAnimations__Class>(type_info, "", "SyncAnimations");
        }
        inline app::SyncAnimations* create() {
            return il2cpp::create_object<app::SyncAnimations>(get_class());
        }
    } // namespace SyncAnimations
} // namespace app::classes::types
