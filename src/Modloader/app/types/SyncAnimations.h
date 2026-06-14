#pragma once
#include <Modloader/app/structs/SyncAnimations.h>
#include <Modloader/app/structs/SyncAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SyncAnimations {
        inline app::SyncAnimations__Class** type_info() {
            static app::SyncAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SyncAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SyncAnimations__Class* get_class() {
            return il2cpp::get_class<app::SyncAnimations__Class>(type_info(), "", "SyncAnimations");
        }
        inline app::SyncAnimations* create() {
            return il2cpp::create_object<app::SyncAnimations>(get_class());
        }
    } // namespace SyncAnimations
} // namespace app::classes::types
