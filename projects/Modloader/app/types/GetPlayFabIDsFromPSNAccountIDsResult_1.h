#pragma once
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsResult_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromPSNAccountIDsResult_1 {
        inline app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class** type_info() {
            static app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class**)(modloader::win::memory::resolve_rva(0x0471A588));
            }
            return cache;
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetPlayFabIDsFromPSNAccountIDsResult");
        }
        inline app::GetPlayFabIDsFromPSNAccountIDsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromPSNAccountIDsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromPSNAccountIDsResult_1
} // namespace app::classes::types
