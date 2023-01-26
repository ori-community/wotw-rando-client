#pragma once
#include <Modloader/app/structs/LinkTwitchAccountResult.h>
#include <Modloader/app/structs/LinkTwitchAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkTwitchAccountResult {
        inline app::LinkTwitchAccountResult__Class** type_info() {
            static app::LinkTwitchAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkTwitchAccountResult__Class**)(modloader::win::memory::resolve_rva(0x047440F8));
            }
            return cache;
        }
        inline app::LinkTwitchAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkTwitchAccountResult__Class>(type_info(), "PlayFab.ClientModels", "LinkTwitchAccountResult");
        }
        inline app::LinkTwitchAccountResult* create() {
            return il2cpp::create_object<app::LinkTwitchAccountResult>(get_class());
        }
    } // namespace LinkTwitchAccountResult
} // namespace app::classes::types
