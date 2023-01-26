#pragma once
#include <Modloader/app/structs/RemovePlayerTagResult.h>
#include <Modloader/app/structs/RemovePlayerTagResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemovePlayerTagResult {
        inline app::RemovePlayerTagResult__Class** type_info() {
            static app::RemovePlayerTagResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemovePlayerTagResult__Class**)(modloader::win::memory::resolve_rva(0x04734F78));
            }
            return cache;
        }
        inline app::RemovePlayerTagResult__Class* get_class() {
            return il2cpp::get_class<app::RemovePlayerTagResult__Class>(type_info(), "PlayFab.ServerModels", "RemovePlayerTagResult");
        }
        inline app::RemovePlayerTagResult* create() {
            return il2cpp::create_object<app::RemovePlayerTagResult>(get_class());
        }
    } // namespace RemovePlayerTagResult
} // namespace app::classes::types
