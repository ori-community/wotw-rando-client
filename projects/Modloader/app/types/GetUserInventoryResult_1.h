#pragma once
#include <Modloader/app/structs/GetUserInventoryResult_1.h>
#include <Modloader/app/structs/GetUserInventoryResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserInventoryResult_1 {
        inline app::GetUserInventoryResult_1__Class** type_info() {
            static app::GetUserInventoryResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetUserInventoryResult_1__Class**)(modloader::win::memory::resolve_rva(0x0476B960));
            }
            return cache;
        }
        inline app::GetUserInventoryResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetUserInventoryResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetUserInventoryResult");
        }
        inline app::GetUserInventoryResult_1* create() {
            return il2cpp::create_object<app::GetUserInventoryResult_1>(get_class());
        }
    } // namespace GetUserInventoryResult_1
} // namespace app::classes::types
