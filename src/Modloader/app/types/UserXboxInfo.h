#pragma once
#include <Modloader/app/structs/UserXboxInfo.h>
#include <Modloader/app/structs/UserXboxInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserXboxInfo {
        inline app::UserXboxInfo__Class** type_info() {
            static app::UserXboxInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserXboxInfo__Class**)(modloader::win::memory::resolve_rva(0x04765140));
            }
            return cache;
        }
        inline app::UserXboxInfo__Class* get_class() {
            return il2cpp::get_class<app::UserXboxInfo__Class>(type_info(), "PlayFab.ClientModels", "UserXboxInfo");
        }
        inline app::UserXboxInfo* create() {
            return il2cpp::create_object<app::UserXboxInfo>(get_class());
        }
    } // namespace UserXboxInfo
} // namespace app::classes::types
