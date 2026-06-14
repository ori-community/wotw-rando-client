#pragma once
#include <Modloader/app/structs/HornBugBossHeadSlamBehaviour_new.h>
#include <Modloader/app/structs/HornBugBossHeadSlamBehaviour_new__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugBossHeadSlamBehaviour_new {
        inline app::HornBugBossHeadSlamBehaviour_new__Class** type_info() {
            static app::HornBugBossHeadSlamBehaviour_new__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugBossHeadSlamBehaviour_new__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugBossHeadSlamBehaviour_new__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossHeadSlamBehaviour_new__Class>(type_info(), "", "HornBugBossHeadSlamBehaviour_new");
        }
        inline app::HornBugBossHeadSlamBehaviour_new* create() {
            return il2cpp::create_object<app::HornBugBossHeadSlamBehaviour_new>(get_class());
        }
    } // namespace HornBugBossHeadSlamBehaviour_new
} // namespace app::classes::types
