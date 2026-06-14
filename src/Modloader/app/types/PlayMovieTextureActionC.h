#pragma once
#include <Modloader/app/structs/PlayMovieTextureActionC.h>
#include <Modloader/app/structs/PlayMovieTextureActionC__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayMovieTextureActionC {
        inline app::PlayMovieTextureActionC__Class** type_info() {
            static app::PlayMovieTextureActionC__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayMovieTextureActionC__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayMovieTextureActionC__Class* get_class() {
            return il2cpp::get_class<app::PlayMovieTextureActionC__Class>(type_info(), "", "PlayMovieTextureActionC");
        }
        inline app::PlayMovieTextureActionC* create() {
            return il2cpp::create_object<app::PlayMovieTextureActionC>(get_class());
        }
    } // namespace PlayMovieTextureActionC
} // namespace app::classes::types
