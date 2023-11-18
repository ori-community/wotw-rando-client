#pragma once
#include <Modloader/app/structs/UnlinkGoogleAccountResult.h>
#include <Modloader/app/structs/UnlinkGoogleAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkGoogleAccountResult {
        inline app::UnlinkGoogleAccountResult__Class** type_info() {
            static app::UnlinkGoogleAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkGoogleAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04796FD0));
            }
            return cache;
        }
        inline app::UnlinkGoogleAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkGoogleAccountResult__Class>(type_info(), "PlayFab.ClientModels", "UnlinkGoogleAccountResult");
        }
        inline app::UnlinkGoogleAccountResult* create() {
            return il2cpp::create_object<app::UnlinkGoogleAccountResult>(get_class());
        }
    } // namespace UnlinkGoogleAccountResult
} // namespace app::classes::types
