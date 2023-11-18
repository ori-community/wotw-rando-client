#pragma once
#include <Modloader/app/structs/SpiderBatEntity.h>
#include <Modloader/app/structs/SpiderBatEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntity {
        inline app::SpiderBatEntity__Class** type_info() {
            static app::SpiderBatEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderBatEntity__Class**)(modloader::win::memory::resolve_rva(0x04765BA0));
            }
            return cache;
        }
        inline app::SpiderBatEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatEntity__Class>(type_info(), "", "SpiderBatEntity");
        }
        inline app::SpiderBatEntity* create() {
            return il2cpp::create_object<app::SpiderBatEntity>(get_class());
        }
    } // namespace SpiderBatEntity
} // namespace app::classes::types
