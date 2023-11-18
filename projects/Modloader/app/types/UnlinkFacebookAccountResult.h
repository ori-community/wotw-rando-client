#pragma once
#include <Modloader/app/structs/UnlinkFacebookAccountResult.h>
#include <Modloader/app/structs/UnlinkFacebookAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkFacebookAccountResult {
        inline app::UnlinkFacebookAccountResult__Class** type_info() {
            static app::UnlinkFacebookAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkFacebookAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0475C780));
            }
            return cache;
        }
        inline app::UnlinkFacebookAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkFacebookAccountResult__Class>(type_info(), "PlayFab.ClientModels", "UnlinkFacebookAccountResult");
        }
        inline app::UnlinkFacebookAccountResult* create() {
            return il2cpp::create_object<app::UnlinkFacebookAccountResult>(get_class());
        }
    } // namespace UnlinkFacebookAccountResult
} // namespace app::classes::types
