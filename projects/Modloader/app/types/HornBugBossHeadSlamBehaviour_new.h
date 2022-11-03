#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugBossHeadSlamBehaviour_new {
        namespace {
            inline app::HornBugBossHeadSlamBehaviour_new__Class* type_info_ref = nullptr;
        }
        inline app::HornBugBossHeadSlamBehaviour_new__Class** type_info = &type_info_ref;
        inline app::HornBugBossHeadSlamBehaviour_new__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossHeadSlamBehaviour_new__Class>(type_info, "", "HornBugBossHeadSlamBehaviour_new");
        }
        inline app::HornBugBossHeadSlamBehaviour_new* create() {
            return il2cpp::create_object<app::HornBugBossHeadSlamBehaviour_new>(get_class());
        }
    } // namespace HornBugBossHeadSlamBehaviour_new
} // namespace app::classes::types
