#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_MoveRequest {
        inline app::KwolokBossLocomotion_MoveRequest__Class** type_info() {
            static app::KwolokBossLocomotion_MoveRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossLocomotion_MoveRequest__Class**)(modloader::win::memory::resolve_rva(0x0471ECA8));
            }
            return cache;
        }
        inline app::KwolokBossLocomotion_MoveRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_MoveRequest__Class>(type_info(), "", "KwolokBossLocomotion", "MoveRequest");
        }
        inline app::KwolokBossLocomotion_MoveRequest* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_MoveRequest>(get_class());
        }
    } // namespace KwolokBossLocomotion_MoveRequest
} // namespace app::classes::types
