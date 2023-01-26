#pragma once
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabError__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabError {
        inline app::PlayFabError__Class** type_info() {
            static app::PlayFabError__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabError__Class**)(modloader::win::memory::resolve_rva(0x04749100));
            }
            return cache;
        }
        inline app::PlayFabError__Class* get_class() {
            return il2cpp::get_class<app::PlayFabError__Class>(type_info(), "PlayFab", "PlayFabError");
        }
        inline app::PlayFabError* create() {
            return il2cpp::create_object<app::PlayFabError>(get_class());
        }
    } // namespace PlayFabError
} // namespace app::classes::types
