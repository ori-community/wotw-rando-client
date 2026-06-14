#pragma once
#include <Modloader/app/structs/RevokeBansResult.h>
#include <Modloader/app/structs/RevokeBansResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RevokeBansResult {
        inline app::RevokeBansResult__Class** type_info() {
            static app::RevokeBansResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RevokeBansResult__Class**)(modloader::win::memory::resolve_rva(0x04785170));
            }
            return cache;
        }
        inline app::RevokeBansResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeBansResult__Class>(type_info(), "PlayFab.ServerModels", "RevokeBansResult");
        }
        inline app::RevokeBansResult* create() {
            return il2cpp::create_object<app::RevokeBansResult>(get_class());
        }
    } // namespace RevokeBansResult
} // namespace app::classes::types
