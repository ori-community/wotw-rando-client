#pragma once
#include <Modloader/app/structs/ShardTraderIdleBehaviour.h>
#include <Modloader/app/structs/ShardTraderIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderIdleBehaviour {
        inline app::ShardTraderIdleBehaviour__Class** type_info() {
            static app::ShardTraderIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardTraderIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardTraderIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderIdleBehaviour__Class>(type_info(), "Moon", "ShardTraderIdleBehaviour");
        }
        inline app::ShardTraderIdleBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderIdleBehaviour>(get_class());
        }
    } // namespace ShardTraderIdleBehaviour
} // namespace app::classes::types
