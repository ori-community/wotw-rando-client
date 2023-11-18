#pragma once
#include <Modloader/app/structs/ShardTraderEntity.h>
#include <Modloader/app/structs/ShardTraderEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderEntity {
        inline app::ShardTraderEntity__Class** type_info() {
            static app::ShardTraderEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardTraderEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardTraderEntity__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderEntity__Class>(type_info(), "", "ShardTraderEntity");
        }
        inline app::ShardTraderEntity* create() {
            return il2cpp::create_object<app::ShardTraderEntity>(get_class());
        }
    } // namespace ShardTraderEntity
} // namespace app::classes::types
