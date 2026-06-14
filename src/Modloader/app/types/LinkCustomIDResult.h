#pragma once
#include <Modloader/app/structs/LinkCustomIDResult.h>
#include <Modloader/app/structs/LinkCustomIDResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkCustomIDResult {
        inline app::LinkCustomIDResult__Class** type_info() {
            static app::LinkCustomIDResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkCustomIDResult__Class**)(modloader::win::memory::resolve_rva(0x047364F0));
            }
            return cache;
        }
        inline app::LinkCustomIDResult__Class* get_class() {
            return il2cpp::get_class<app::LinkCustomIDResult__Class>(type_info(), "PlayFab.ClientModels", "LinkCustomIDResult");
        }
        inline app::LinkCustomIDResult* create() {
            return il2cpp::create_object<app::LinkCustomIDResult>(get_class());
        }
    } // namespace LinkCustomIDResult
} // namespace app::classes::types
