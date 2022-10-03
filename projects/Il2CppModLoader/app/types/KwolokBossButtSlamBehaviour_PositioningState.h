#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour_PositioningState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossButtSlamBehaviour_PositioningState__Class** type_info;
        inline app::KwolokBossButtSlamBehaviour_PositioningState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossButtSlamBehaviour_PositioningState__Class>(type_info, "", "KwolokBossButtSlamBehaviour", "PositioningState");
        }
        inline app::KwolokBossButtSlamBehaviour_PositioningState* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour_PositioningState>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour_PositioningState
} // namespace app::classes::types
