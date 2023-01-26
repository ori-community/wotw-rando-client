#pragma once
#include <Modloader/app/structs/AddUsernamePasswordResult.h>
#include <Modloader/app/structs/AddUsernamePasswordResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddUsernamePasswordResult {
        inline app::AddUsernamePasswordResult__Class** type_info() {
            static app::AddUsernamePasswordResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddUsernamePasswordResult__Class**)(modloader::win::memory::resolve_rva(0x04746FE8));
            }
            return cache;
        }
        inline app::AddUsernamePasswordResult__Class* get_class() {
            return il2cpp::get_class<app::AddUsernamePasswordResult__Class>(type_info(), "PlayFab.ClientModels", "AddUsernamePasswordResult");
        }
        inline app::AddUsernamePasswordResult* create() {
            return il2cpp::create_object<app::AddUsernamePasswordResult>(get_class());
        }
    } // namespace AddUsernamePasswordResult
} // namespace app::classes::types
