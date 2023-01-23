#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LinkXboxAccountResult__Class.h>
#include <Modloader/app/structs/LinkXboxAccountResult.h>

namespace app::classes::types {
    namespace LinkXboxAccountResult {
        inline app::LinkXboxAccountResult__Class** type_info = (app::LinkXboxAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04774CF8));
        inline app::LinkXboxAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkXboxAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkXboxAccountResult");
        }
        inline app::LinkXboxAccountResult* create() {
            return il2cpp::create_object<app::LinkXboxAccountResult>(get_class());
        }
    } // namespace LinkXboxAccountResult
} // namespace app::classes::types
