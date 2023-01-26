#pragma once
#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/SpiderBossEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossEntity {
        inline app::SpiderBossEntity__Class** type_info() {
            static app::SpiderBossEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderBossEntity__Class**)(modloader::win::memory::resolve_rva(0x047477C0));
            }
            return cache;
        }
        inline app::SpiderBossEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEntity__Class>(type_info(), "", "SpiderBossEntity");
        }
        inline app::SpiderBossEntity* create() {
            return il2cpp::create_object<app::SpiderBossEntity>(get_class());
        }
    } // namespace SpiderBossEntity
} // namespace app::classes::types
