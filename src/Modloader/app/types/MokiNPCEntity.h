#pragma once
#include <Modloader/app/structs/MokiNPCEntity.h>
#include <Modloader/app/structs/MokiNPCEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MokiNPCEntity {
        inline app::MokiNPCEntity__Class** type_info() {
            static app::MokiNPCEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MokiNPCEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MokiNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::MokiNPCEntity__Class>(type_info(), "", "MokiNPCEntity");
        }
        inline app::MokiNPCEntity* create() {
            return il2cpp::create_object<app::MokiNPCEntity>(get_class());
        }
    } // namespace MokiNPCEntity
} // namespace app::classes::types
