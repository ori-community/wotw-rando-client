#pragma once
#include <Modloader/app/structs/PlayFabException.h>
#include <Modloader/app/structs/PlayFabException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabException {
        inline app::PlayFabException__Class** type_info() {
            static app::PlayFabException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabException__Class**)(modloader::win::memory::resolve_rva(0x0470B740));
            }
            return cache;
        }
        inline app::PlayFabException__Class* get_class() {
            return il2cpp::get_class<app::PlayFabException__Class>(type_info(), "PlayFab", "PlayFabException");
        }
        inline app::PlayFabException* create() {
            return il2cpp::create_object<app::PlayFabException>(get_class());
        }
    } // namespace PlayFabException
} // namespace app::classes::types
