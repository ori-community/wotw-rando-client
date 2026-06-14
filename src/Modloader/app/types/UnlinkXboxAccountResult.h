#pragma once
#include <Modloader/app/structs/UnlinkXboxAccountResult.h>
#include <Modloader/app/structs/UnlinkXboxAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountResult {
        inline app::UnlinkXboxAccountResult__Class** type_info() {
            static app::UnlinkXboxAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkXboxAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04788E08));
            }
            return cache;
        }
        inline app::UnlinkXboxAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountResult__Class>(type_info(), "PlayFab.ClientModels", "UnlinkXboxAccountResult");
        }
        inline app::UnlinkXboxAccountResult* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountResult>(get_class());
        }
    } // namespace UnlinkXboxAccountResult
} // namespace app::classes::types
