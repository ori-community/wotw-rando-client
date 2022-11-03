#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkXboxAccountResult_1 {
        inline app::LinkXboxAccountResult_1__Class** type_info = (app::LinkXboxAccountResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477BD58));
        inline app::LinkXboxAccountResult_1__Class* get_class() {
            return il2cpp::get_class<app::LinkXboxAccountResult_1__Class>(type_info, "PlayFab.ServerModels", "LinkXboxAccountResult");
        }
        inline app::LinkXboxAccountResult_1* create() {
            return il2cpp::create_object<app::LinkXboxAccountResult_1>(get_class());
        }
    } // namespace LinkXboxAccountResult_1
} // namespace app::classes::types
