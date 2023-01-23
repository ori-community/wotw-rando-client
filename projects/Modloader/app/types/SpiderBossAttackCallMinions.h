#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossAttackCallMinions__Class.h>
#include <Modloader/app/structs/SpiderBossAttackCallMinions.h>

namespace app::classes::types {
    namespace SpiderBossAttackCallMinions {
        namespace {
            inline app::SpiderBossAttackCallMinions__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossAttackCallMinions__Class** type_info = &type_info_ref;
        inline app::SpiderBossAttackCallMinions__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAttackCallMinions__Class>(type_info, "", "SpiderBossAttackCallMinions");
        }
        inline app::SpiderBossAttackCallMinions* create() {
            return il2cpp::create_object<app::SpiderBossAttackCallMinions>(get_class());
        }
    } // namespace SpiderBossAttackCallMinions
} // namespace app::classes::types
