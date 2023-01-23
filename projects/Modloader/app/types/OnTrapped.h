#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnTrapped__Class.h>
#include <Modloader/app/structs/OnTrapped.h>

namespace app::classes::types {
    namespace OnTrapped {
        inline app::OnTrapped__Class** type_info = (app::OnTrapped__Class**)(modloader::win::memory::resolve_rva(0x04788A38));
        inline app::OnTrapped__Class* get_class() {
            return il2cpp::get_class<app::OnTrapped__Class>(type_info, "fsm.triggers", "OnTrapped");
        }
        inline app::OnTrapped* create() {
            return il2cpp::create_object<app::OnTrapped>(get_class());
        }
    } // namespace OnTrapped
} // namespace app::classes::types
