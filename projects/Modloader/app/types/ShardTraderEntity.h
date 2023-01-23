#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShardTraderEntity__Class.h>
#include <Modloader/app/structs/ShardTraderEntity.h>

namespace app::classes::types {
    namespace ShardTraderEntity {
        namespace {
            inline app::ShardTraderEntity__Class* type_info_ref = nullptr;
        }
        inline app::ShardTraderEntity__Class** type_info = &type_info_ref;
        inline app::ShardTraderEntity__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderEntity__Class>(type_info, "", "ShardTraderEntity");
        }
        inline app::ShardTraderEntity* create() {
            return il2cpp::create_object<app::ShardTraderEntity>(get_class());
        }
    } // namespace ShardTraderEntity
} // namespace app::classes::types
