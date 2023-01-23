#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossEntity__Class.h>
#include <Modloader/app/structs/SpiderBossEntity.h>

namespace app::classes::types {
    namespace SpiderBossEntity {
        inline app::SpiderBossEntity__Class** type_info = (app::SpiderBossEntity__Class**)(modloader::win::memory::resolve_rva(0x047477C0));
        inline app::SpiderBossEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEntity__Class>(type_info, "", "SpiderBossEntity");
        }
        inline app::SpiderBossEntity* create() {
            return il2cpp::create_object<app::SpiderBossEntity>(get_class());
        }
    } // namespace SpiderBossEntity
} // namespace app::classes::types
