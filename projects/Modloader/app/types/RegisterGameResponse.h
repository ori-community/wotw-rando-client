#pragma once
#include <Modloader/app/structs/RegisterGameResponse.h>
#include <Modloader/app/structs/RegisterGameResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegisterGameResponse {
        inline app::RegisterGameResponse__Class** type_info() {
            static app::RegisterGameResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegisterGameResponse__Class**)(modloader::win::memory::resolve_rva(0x0474D770));
            }
            return cache;
        }
        inline app::RegisterGameResponse__Class* get_class() {
            return il2cpp::get_class<app::RegisterGameResponse__Class>(type_info(), "PlayFab.ServerModels", "RegisterGameResponse");
        }
        inline app::RegisterGameResponse* create() {
            return il2cpp::create_object<app::RegisterGameResponse>(get_class());
        }
    } // namespace RegisterGameResponse
} // namespace app::classes::types
