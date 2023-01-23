#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnlinkXboxAccountRequest_1__Class.h>
#include <Modloader/app/structs/UnlinkXboxAccountRequest_1.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountRequest_1 {
        inline app::UnlinkXboxAccountRequest_1__Class** type_info = (app::UnlinkXboxAccountRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047030C8));
        inline app::UnlinkXboxAccountRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountRequest_1__Class>(type_info, "PlayFab.ServerModels", "UnlinkXboxAccountRequest");
        }
        inline app::UnlinkXboxAccountRequest_1* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountRequest_1>(get_class());
        }
    } // namespace UnlinkXboxAccountRequest_1
} // namespace app::classes::types
