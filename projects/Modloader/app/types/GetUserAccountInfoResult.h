#pragma once
#include <Modloader/app/structs/GetUserAccountInfoResult.h>
#include <Modloader/app/structs/GetUserAccountInfoResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserAccountInfoResult {
        inline app::GetUserAccountInfoResult__Class** type_info() {
            static app::GetUserAccountInfoResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetUserAccountInfoResult__Class**)(modloader::win::memory::resolve_rva(0x04733AF8));
            }
            return cache;
        }
        inline app::GetUserAccountInfoResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserAccountInfoResult__Class>(type_info(), "PlayFab.ServerModels", "GetUserAccountInfoResult");
        }
        inline app::GetUserAccountInfoResult* create() {
            return il2cpp::create_object<app::GetUserAccountInfoResult>(get_class());
        }
    } // namespace GetUserAccountInfoResult
} // namespace app::classes::types
