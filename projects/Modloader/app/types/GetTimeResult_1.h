#pragma once
#include <Modloader/app/structs/GetTimeResult_1.h>
#include <Modloader/app/structs/GetTimeResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTimeResult_1 {
        inline app::GetTimeResult_1__Class** type_info() {
            static app::GetTimeResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTimeResult_1__Class**)(modloader::win::memory::resolve_rva(0x0475CA20));
            }
            return cache;
        }
        inline app::GetTimeResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetTimeResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetTimeResult");
        }
        inline app::GetTimeResult_1* create() {
            return il2cpp::create_object<app::GetTimeResult_1>(get_class());
        }
    } // namespace GetTimeResult_1
} // namespace app::classes::types
