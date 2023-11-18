#pragma once
#include <Modloader/app/structs/MinerNPCEntity.h>
#include <Modloader/app/structs/MinerNPCEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerNPCEntity {
        inline app::MinerNPCEntity__Class** type_info() {
            static app::MinerNPCEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerNPCEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerNPCEntity__Class>(type_info(), "", "MinerNPCEntity");
        }
        inline app::MinerNPCEntity* create() {
            return il2cpp::create_object<app::MinerNPCEntity>(get_class());
        }
    } // namespace MinerNPCEntity
} // namespace app::classes::types
