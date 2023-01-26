#pragma once
#include <Modloader/app/structs/SpiderlingNPCEntity.h>
#include <Modloader/app/structs/SpiderlingNPCEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingNPCEntity {
        inline app::SpiderlingNPCEntity__Class** type_info() {
            static app::SpiderlingNPCEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingNPCEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingNPCEntity__Class>(type_info(), "", "SpiderlingNPCEntity");
        }
        inline app::SpiderlingNPCEntity* create() {
            return il2cpp::create_object<app::SpiderlingNPCEntity>(get_class());
        }
    } // namespace SpiderlingNPCEntity
} // namespace app::classes::types
