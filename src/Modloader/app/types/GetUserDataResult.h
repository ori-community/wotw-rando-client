#pragma once
#include <Modloader/app/structs/GetUserDataResult.h>
#include <Modloader/app/structs/GetUserDataResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserDataResult {
        inline app::GetUserDataResult__Class** type_info() {
            static app::GetUserDataResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetUserDataResult__Class**)(modloader::win::memory::resolve_rva(0x04775D90));
            }
            return cache;
        }
        inline app::GetUserDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataResult__Class>(type_info(), "PlayFab.ClientModels", "GetUserDataResult");
        }
        inline app::GetUserDataResult* create() {
            return il2cpp::create_object<app::GetUserDataResult>(get_class());
        }
    } // namespace GetUserDataResult
} // namespace app::classes::types
