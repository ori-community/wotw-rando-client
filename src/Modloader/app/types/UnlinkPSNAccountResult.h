#pragma once
#include <Modloader/app/structs/UnlinkPSNAccountResult.h>
#include <Modloader/app/structs/UnlinkPSNAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkPSNAccountResult {
        inline app::UnlinkPSNAccountResult__Class** type_info() {
            static app::UnlinkPSNAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkPSNAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04784FE0));
            }
            return cache;
        }
        inline app::UnlinkPSNAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkPSNAccountResult__Class>(type_info(), "PlayFab.ClientModels", "UnlinkPSNAccountResult");
        }
        inline app::UnlinkPSNAccountResult* create() {
            return il2cpp::create_object<app::UnlinkPSNAccountResult>(get_class());
        }
    } // namespace UnlinkPSNAccountResult
} // namespace app::classes::types
