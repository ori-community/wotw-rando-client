#pragma once
#include <Modloader/app/structs/GameControllerLate.h>
#include <Modloader/app/structs/GameControllerLate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameControllerLate {
        inline app::GameControllerLate__Class** type_info() {
            static app::GameControllerLate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameControllerLate__Class**)(modloader::win::memory::resolve_rva(0x04702018));
            }
            return cache;
        }
        inline app::GameControllerLate__Class* get_class() {
            return il2cpp::get_class<app::GameControllerLate__Class>(type_info(), "", "GameControllerLate");
        }
        inline app::GameControllerLate* create() {
            return il2cpp::create_object<app::GameControllerLate>(get_class());
        }
    } // namespace GameControllerLate
} // namespace app::classes::types
