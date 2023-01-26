#pragma once
#include <Modloader/app/structs/UserCustomIdInfo.h>
#include <Modloader/app/structs/UserCustomIdInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserCustomIdInfo {
        inline app::UserCustomIdInfo__Class** type_info() {
            static app::UserCustomIdInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserCustomIdInfo__Class**)(modloader::win::memory::resolve_rva(0x04741FA8));
            }
            return cache;
        }
        inline app::UserCustomIdInfo__Class* get_class() {
            return il2cpp::get_class<app::UserCustomIdInfo__Class>(type_info(), "PlayFab.ClientModels", "UserCustomIdInfo");
        }
        inline app::UserCustomIdInfo* create() {
            return il2cpp::create_object<app::UserCustomIdInfo>(get_class());
        }
    } // namespace UserCustomIdInfo
} // namespace app::classes::types
