#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugBossHeadSlamBehaviour_new {
        namespace {
            app::HornBugBossHeadSlamBehaviour_new__Class* type_info_ref = nullptr;
        }
        app::HornBugBossHeadSlamBehaviour_new__Class** type_info = &type_info_ref;
        inline app::HornBugBossHeadSlamBehaviour_new__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossHeadSlamBehaviour_new__Class>(type_info, "", "HornBugBossHeadSlamBehaviour_new");
        }
        inline app::HornBugBossHeadSlamBehaviour_new* create() {
            return il2cpp::create_object<app::HornBugBossHeadSlamBehaviour_new>(get_class());
        }
    } // namespace HornBugBossHeadSlamBehaviour_new
} // namespace app::classes::types
