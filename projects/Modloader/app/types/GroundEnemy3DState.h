#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundEnemy3DState__Class.h>
#include <Modloader/app/structs/GroundEnemy3DState.h>

namespace app::classes::types {
    namespace GroundEnemy3DState {
        namespace {
            inline app::GroundEnemy3DState__Class* type_info_ref = nullptr;
        }
        inline app::GroundEnemy3DState__Class** type_info = &type_info_ref;
        inline app::GroundEnemy3DState__Class* get_class() {
            return il2cpp::get_class<app::GroundEnemy3DState__Class>(type_info, "", "GroundEnemy3DState");
        }
        inline app::GroundEnemy3DState* create() {
            return il2cpp::create_object<app::GroundEnemy3DState>(get_class());
        }
    } // namespace GroundEnemy3DState
} // namespace app::classes::types
