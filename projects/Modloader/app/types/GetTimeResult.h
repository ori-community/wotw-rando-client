#pragma once
#include <Modloader/app/structs/GetTimeResult.h>
#include <Modloader/app/structs/GetTimeResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTimeResult {
        inline app::GetTimeResult__Class** type_info() {
            static app::GetTimeResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTimeResult__Class**)(modloader::win::memory::resolve_rva(0x04712B20));
            }
            return cache;
        }
        inline app::GetTimeResult__Class* get_class() {
            return il2cpp::get_class<app::GetTimeResult__Class>(type_info(), "PlayFab.ClientModels", "GetTimeResult");
        }
        inline app::GetTimeResult* create() {
            return il2cpp::create_object<app::GetTimeResult>(get_class());
        }
    } // namespace GetTimeResult
} // namespace app::classes::types
