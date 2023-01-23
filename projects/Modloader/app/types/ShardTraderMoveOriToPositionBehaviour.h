#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShardTraderMoveOriToPositionBehaviour__Class.h>
#include <Modloader/app/structs/ShardTraderMoveOriToPositionBehaviour.h>

namespace app::classes::types {
    namespace ShardTraderMoveOriToPositionBehaviour {
        namespace {
            inline app::ShardTraderMoveOriToPositionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ShardTraderMoveOriToPositionBehaviour__Class** type_info = &type_info_ref;
        inline app::ShardTraderMoveOriToPositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderMoveOriToPositionBehaviour__Class>(type_info, "Moon", "ShardTraderMoveOriToPositionBehaviour");
        }
        inline app::ShardTraderMoveOriToPositionBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderMoveOriToPositionBehaviour>(get_class());
        }
    } // namespace ShardTraderMoveOriToPositionBehaviour
} // namespace app::classes::types
