#pragma once
#include <Modloader/app/structs/LinkFacebookAccountResult.h>
#include <Modloader/app/structs/LinkFacebookAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkFacebookAccountResult {
        inline app::LinkFacebookAccountResult__Class** type_info() {
            static app::LinkFacebookAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkFacebookAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0477A0B8));
            }
            return cache;
        }
        inline app::LinkFacebookAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookAccountResult__Class>(type_info(), "PlayFab.ClientModels", "LinkFacebookAccountResult");
        }
        inline app::LinkFacebookAccountResult* create() {
            return il2cpp::create_object<app::LinkFacebookAccountResult>(get_class());
        }
    } // namespace LinkFacebookAccountResult
} // namespace app::classes::types
