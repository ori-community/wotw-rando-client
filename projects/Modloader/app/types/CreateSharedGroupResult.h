#pragma once
#include <Modloader/app/structs/CreateSharedGroupResult.h>
#include <Modloader/app/structs/CreateSharedGroupResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateSharedGroupResult {
        inline app::CreateSharedGroupResult__Class** type_info() {
            static app::CreateSharedGroupResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateSharedGroupResult__Class**)(modloader::win::memory::resolve_rva(0x04785940));
            }
            return cache;
        }
        inline app::CreateSharedGroupResult__Class* get_class() {
            return il2cpp::get_class<app::CreateSharedGroupResult__Class>(type_info(), "PlayFab.ClientModels", "CreateSharedGroupResult");
        }
        inline app::CreateSharedGroupResult* create() {
            return il2cpp::create_object<app::CreateSharedGroupResult>(get_class());
        }
    } // namespace CreateSharedGroupResult
} // namespace app::classes::types
