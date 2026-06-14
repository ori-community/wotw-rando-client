#pragma once
#include <Modloader/app/structs/ShardTraderMoveOriToPositionBehaviour.h>
#include <Modloader/app/structs/ShardTraderMoveOriToPositionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderMoveOriToPositionBehaviour {
        inline app::ShardTraderMoveOriToPositionBehaviour__Class** type_info() {
            static app::ShardTraderMoveOriToPositionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardTraderMoveOriToPositionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardTraderMoveOriToPositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderMoveOriToPositionBehaviour__Class>(type_info(), "Moon", "ShardTraderMoveOriToPositionBehaviour");
        }
        inline app::ShardTraderMoveOriToPositionBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderMoveOriToPositionBehaviour>(get_class());
        }
    } // namespace ShardTraderMoveOriToPositionBehaviour
} // namespace app::classes::types
