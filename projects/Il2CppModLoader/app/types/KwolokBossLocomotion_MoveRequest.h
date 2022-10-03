#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_MoveRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossLocomotion_MoveRequest__Class** type_info;
        inline app::KwolokBossLocomotion_MoveRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_MoveRequest__Class>(type_info, "", "KwolokBossLocomotion", "MoveRequest");
        }
        inline app::KwolokBossLocomotion_MoveRequest* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_MoveRequest>(get_class());
        }
    } // namespace KwolokBossLocomotion_MoveRequest
} // namespace app::classes::types
