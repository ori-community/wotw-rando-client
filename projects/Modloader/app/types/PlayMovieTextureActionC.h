#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayMovieTextureActionC {
        namespace {
            inline app::PlayMovieTextureActionC__Class* type_info_ref = nullptr;
        }
        inline app::PlayMovieTextureActionC__Class** type_info = &type_info_ref;
        inline app::PlayMovieTextureActionC__Class* get_class() {
            return il2cpp::get_class<app::PlayMovieTextureActionC__Class>(type_info, "", "PlayMovieTextureActionC");
        }
        inline app::PlayMovieTextureActionC* create() {
            return il2cpp::create_object<app::PlayMovieTextureActionC>(get_class());
        }
    } // namespace PlayMovieTextureActionC
} // namespace app::classes::types
