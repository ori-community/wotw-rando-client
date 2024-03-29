#pragma once
#include <Modloader/app/structs/SimpleNPCEntity.h>
#include <Modloader/app/structs/SimpleNPCEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleNPCEntity {
        inline app::SimpleNPCEntity__Class** type_info() {
            static app::SimpleNPCEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleNPCEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleNPCEntity__Class* get_class() {
            return il2cpp::get_class<app::SimpleNPCEntity__Class>(type_info(), "frameworks.entity", "SimpleNPCEntity");
        }
        inline app::SimpleNPCEntity* create() {
            return il2cpp::create_object<app::SimpleNPCEntity>(get_class());
        }
    } // namespace SimpleNPCEntity
} // namespace app::classes::types
