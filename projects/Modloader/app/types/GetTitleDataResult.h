#pragma once
#include <Modloader/app/structs/GetTitleDataResult.h>
#include <Modloader/app/structs/GetTitleDataResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTitleDataResult {
        inline app::GetTitleDataResult__Class** type_info() {
            static app::GetTitleDataResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTitleDataResult__Class**)(modloader::win::memory::resolve_rva(0x0472CDF0));
            }
            return cache;
        }
        inline app::GetTitleDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataResult__Class>(type_info(), "PlayFab.ClientModels", "GetTitleDataResult");
        }
        inline app::GetTitleDataResult* create() {
            return il2cpp::create_object<app::GetTitleDataResult>(get_class());
        }
    } // namespace GetTitleDataResult
} // namespace app::classes::types
