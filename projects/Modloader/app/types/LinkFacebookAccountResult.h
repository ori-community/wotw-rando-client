#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LinkFacebookAccountResult__Class.h>
#include <Modloader/app/structs/LinkFacebookAccountResult.h>

namespace app::classes::types {
    namespace LinkFacebookAccountResult {
        inline app::LinkFacebookAccountResult__Class** type_info = (app::LinkFacebookAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0477A0B8));
        inline app::LinkFacebookAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkFacebookAccountResult");
        }
        inline app::LinkFacebookAccountResult* create() {
            return il2cpp::create_object<app::LinkFacebookAccountResult>(get_class());
        }
    } // namespace LinkFacebookAccountResult
} // namespace app::classes::types
