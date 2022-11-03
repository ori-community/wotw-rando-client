#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberGCManager {
        inline app::UberGCManager__Class** type_info = (app::UberGCManager__Class**)(modloader::win::memory::resolve_rva(0x0476B2D0));
        inline app::UberGCManager__Class* get_class() {
            return il2cpp::get_class<app::UberGCManager__Class>(type_info, "", "UberGCManager");
        }
        inline app::UberGCManager* create() {
            return il2cpp::create_object<app::UberGCManager>(get_class());
        }
    } // namespace UberGCManager
} // namespace app::classes::types
