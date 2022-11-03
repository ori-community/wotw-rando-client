#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabError {
        inline app::PlayFabError__Class** type_info = (app::PlayFabError__Class**)(modloader::win::memory::resolve_rva(0x04749100));
        inline app::PlayFabError__Class* get_class() {
            return il2cpp::get_class<app::PlayFabError__Class>(type_info, "PlayFab", "PlayFabError");
        }
        inline app::PlayFabError* create() {
            return il2cpp::create_object<app::PlayFabError>(get_class());
        }
    } // namespace PlayFabError
} // namespace app::classes::types
