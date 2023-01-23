#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AddUserVirtualCurrencyRequest_1__Class.h>
#include <Modloader/app/structs/AddUserVirtualCurrencyRequest_1.h>

namespace app::classes::types {
    namespace AddUserVirtualCurrencyRequest_1 {
        inline app::AddUserVirtualCurrencyRequest_1__Class** type_info = (app::AddUserVirtualCurrencyRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0478E3D0));
        inline app::AddUserVirtualCurrencyRequest_1__Class* get_class() {
            return il2cpp::get_class<app::AddUserVirtualCurrencyRequest_1__Class>(type_info, "PlayFab.ServerModels", "AddUserVirtualCurrencyRequest");
        }
        inline app::AddUserVirtualCurrencyRequest_1* create() {
            return il2cpp::create_object<app::AddUserVirtualCurrencyRequest_1>(get_class());
        }
    } // namespace AddUserVirtualCurrencyRequest_1
} // namespace app::classes::types
