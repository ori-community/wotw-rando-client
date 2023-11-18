#pragma once
#include <Modloader/app/structs/RegisterPlayFabUserResult.h>
#include <Modloader/app/structs/RegisterPlayFabUserResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegisterPlayFabUserResult {
        inline app::RegisterPlayFabUserResult__Class** type_info() {
            static app::RegisterPlayFabUserResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegisterPlayFabUserResult__Class**)(modloader::win::memory::resolve_rva(0x04762968));
            }
            return cache;
        }
        inline app::RegisterPlayFabUserResult__Class* get_class() {
            return il2cpp::get_class<app::RegisterPlayFabUserResult__Class>(type_info(), "PlayFab.ClientModels", "RegisterPlayFabUserResult");
        }
        inline app::RegisterPlayFabUserResult* create() {
            return il2cpp::create_object<app::RegisterPlayFabUserResult>(get_class());
        }
    } // namespace RegisterPlayFabUserResult
} // namespace app::classes::types
