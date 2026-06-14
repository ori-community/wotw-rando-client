#pragma once
#include <Modloader/app/structs/PlayFabHttp.h>
#include <Modloader/app/structs/PlayFabHttp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabHttp {
        inline app::PlayFabHttp__Class** type_info() {
            static app::PlayFabHttp__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabHttp__Class**)(modloader::win::memory::resolve_rva(0x0478C1F0));
            }
            return cache;
        }
        inline app::PlayFabHttp__Class* get_class() {
            return il2cpp::get_class<app::PlayFabHttp__Class>(type_info(), "PlayFab.Internal", "PlayFabHttp");
        }
        inline app::PlayFabHttp* create() {
            return il2cpp::create_object<app::PlayFabHttp>(get_class());
        }
    } // namespace PlayFabHttp
} // namespace app::classes::types
