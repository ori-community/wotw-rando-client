#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugBossEntity {
        namespace {
            inline app::HornBugBossEntity__Class* type_info_ref = nullptr;
        }
        inline app::HornBugBossEntity__Class** type_info = &type_info_ref;
        inline app::HornBugBossEntity__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossEntity__Class>(type_info, "", "HornBugBossEntity");
        }
        inline app::HornBugBossEntity* create() {
            return il2cpp::create_object<app::HornBugBossEntity>(get_class());
        }
    } // namespace HornBugBossEntity
} // namespace app::classes::types
