#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossButtSlamBehaviour_States__Class** type_info;
        inline app::KwolokBossButtSlamBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossButtSlamBehaviour_States__Class>(type_info, "", "KwolokBossButtSlamBehaviour", "States");
        }
        inline app::KwolokBossButtSlamBehaviour_States* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour_States>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour_States
} // namespace app::classes::types
