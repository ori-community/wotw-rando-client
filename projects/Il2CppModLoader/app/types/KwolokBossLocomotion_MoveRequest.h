#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_MoveRequest {
        inline app::KwolokBossLocomotion_MoveRequest__Class** type_info = (app::KwolokBossLocomotion_MoveRequest__Class**)(modloader::win::memory::resolve_rva(0x0471ECA8));
        inline app::KwolokBossLocomotion_MoveRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_MoveRequest__Class>(type_info, "", "KwolokBossLocomotion", "MoveRequest");
        }
        inline app::KwolokBossLocomotion_MoveRequest* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_MoveRequest>(get_class());
        }
    } // namespace KwolokBossLocomotion_MoveRequest
} // namespace app::classes::types
