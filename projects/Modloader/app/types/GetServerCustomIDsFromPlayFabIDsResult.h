#pragma once
#include <Modloader/app/structs/GetServerCustomIDsFromPlayFabIDsResult.h>
#include <Modloader/app/structs/GetServerCustomIDsFromPlayFabIDsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetServerCustomIDsFromPlayFabIDsResult {
        inline app::GetServerCustomIDsFromPlayFabIDsResult__Class** type_info() {
            static app::GetServerCustomIDsFromPlayFabIDsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetServerCustomIDsFromPlayFabIDsResult__Class**)(modloader::win::memory::resolve_rva(0x0475C380));
            }
            return cache;
        }
        inline app::GetServerCustomIDsFromPlayFabIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetServerCustomIDsFromPlayFabIDsResult__Class>(type_info(), "PlayFab.ServerModels", "GetServerCustomIDsFromPlayFabIDsResult");
        }
        inline app::GetServerCustomIDsFromPlayFabIDsResult* create() {
            return il2cpp::create_object<app::GetServerCustomIDsFromPlayFabIDsResult>(get_class());
        }
    } // namespace GetServerCustomIDsFromPlayFabIDsResult
} // namespace app::classes::types
