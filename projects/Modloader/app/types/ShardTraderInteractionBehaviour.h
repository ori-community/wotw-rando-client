#pragma once
#include <Modloader/app/structs/ShardTraderInteractionBehaviour.h>
#include <Modloader/app/structs/ShardTraderInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderInteractionBehaviour {
        inline app::ShardTraderInteractionBehaviour__Class** type_info() {
            static app::ShardTraderInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardTraderInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardTraderInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderInteractionBehaviour__Class>(type_info(), "Moon", "ShardTraderInteractionBehaviour");
        }
        inline app::ShardTraderInteractionBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderInteractionBehaviour>(get_class());
        }
    } // namespace ShardTraderInteractionBehaviour
} // namespace app::classes::types
