#pragma once
#include <Modloader/app/structs/LinkPSNAccountResult.h>
#include <Modloader/app/structs/LinkPSNAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkPSNAccountResult {
        inline app::LinkPSNAccountResult__Class** type_info() {
            static app::LinkPSNAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkPSNAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0474D780));
            }
            return cache;
        }
        inline app::LinkPSNAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkPSNAccountResult__Class>(type_info(), "PlayFab.ClientModels", "LinkPSNAccountResult");
        }
        inline app::LinkPSNAccountResult* create() {
            return il2cpp::create_object<app::LinkPSNAccountResult>(get_class());
        }
    } // namespace LinkPSNAccountResult
} // namespace app::classes::types
