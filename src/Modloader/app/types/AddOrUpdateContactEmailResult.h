#pragma once
#include <Modloader/app/structs/AddOrUpdateContactEmailResult.h>
#include <Modloader/app/structs/AddOrUpdateContactEmailResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddOrUpdateContactEmailResult {
        inline app::AddOrUpdateContactEmailResult__Class** type_info() {
            static app::AddOrUpdateContactEmailResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddOrUpdateContactEmailResult__Class**)(modloader::win::memory::resolve_rva(0x04704B18));
            }
            return cache;
        }
        inline app::AddOrUpdateContactEmailResult__Class* get_class() {
            return il2cpp::get_class<app::AddOrUpdateContactEmailResult__Class>(type_info(), "PlayFab.ClientModels", "AddOrUpdateContactEmailResult");
        }
        inline app::AddOrUpdateContactEmailResult* create() {
            return il2cpp::create_object<app::AddOrUpdateContactEmailResult>(get_class());
        }
    } // namespace AddOrUpdateContactEmailResult
} // namespace app::classes::types
