#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateUserDataRequest_1 {
        inline app::UpdateUserDataRequest_1__Class** type_info = (app::UpdateUserDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04734478));
        inline app::UpdateUserDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserDataRequest_1__Class>(type_info, "PlayFab.ServerModels", "UpdateUserDataRequest");
        }
        inline app::UpdateUserDataRequest_1* create() {
            return il2cpp::create_object<app::UpdateUserDataRequest_1>(get_class());
        }
    } // namespace UpdateUserDataRequest_1
} // namespace app::classes::types
