#pragma once
#include <Modloader/app/structs/LinkGoogleAccountResult.h>
#include <Modloader/app/structs/LinkGoogleAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkGoogleAccountResult {
        inline app::LinkGoogleAccountResult__Class** type_info() {
            static app::LinkGoogleAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkGoogleAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04715FC8));
            }
            return cache;
        }
        inline app::LinkGoogleAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkGoogleAccountResult__Class>(type_info(), "PlayFab.ClientModels", "LinkGoogleAccountResult");
        }
        inline app::LinkGoogleAccountResult* create() {
            return il2cpp::create_object<app::LinkGoogleAccountResult>(get_class());
        }
    } // namespace LinkGoogleAccountResult
} // namespace app::classes::types
