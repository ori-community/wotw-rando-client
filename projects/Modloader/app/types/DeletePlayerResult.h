#pragma once
#include <Modloader/app/structs/DeletePlayerResult.h>
#include <Modloader/app/structs/DeletePlayerResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeletePlayerResult {
        inline app::DeletePlayerResult__Class** type_info() {
            static app::DeletePlayerResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeletePlayerResult__Class**)(modloader::win::memory::resolve_rva(0x0471C5C8));
            }
            return cache;
        }
        inline app::DeletePlayerResult__Class* get_class() {
            return il2cpp::get_class<app::DeletePlayerResult__Class>(type_info(), "PlayFab.ServerModels", "DeletePlayerResult");
        }
        inline app::DeletePlayerResult* create() {
            return il2cpp::create_object<app::DeletePlayerResult>(get_class());
        }
    } // namespace DeletePlayerResult
} // namespace app::classes::types
