#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkXboxAccountRequest_1 {
        inline app::LinkXboxAccountRequest_1__Class** type_info = (app::LinkXboxAccountRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04750E30));
        inline app::LinkXboxAccountRequest_1__Class* get_class() {
            return il2cpp::get_class<app::LinkXboxAccountRequest_1__Class>(type_info, "PlayFab.ServerModels", "LinkXboxAccountRequest");
        }
        inline app::LinkXboxAccountRequest_1* create() {
            return il2cpp::create_object<app::LinkXboxAccountRequest_1>(get_class());
        }
    } // namespace LinkXboxAccountRequest_1
} // namespace app::classes::types
