#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_PositioningState__Class.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_PositioningState.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour_PositioningState {
        inline app::KwolokBossButtSlamBehaviour_PositioningState__Class** type_info = (app::KwolokBossButtSlamBehaviour_PositioningState__Class**)(modloader::win::memory::resolve_rva(0x0473DD68));
        inline app::KwolokBossButtSlamBehaviour_PositioningState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossButtSlamBehaviour_PositioningState__Class>(type_info, "", "KwolokBossButtSlamBehaviour", "PositioningState");
        }
        inline app::KwolokBossButtSlamBehaviour_PositioningState* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour_PositioningState>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour_PositioningState
} // namespace app::classes::types
