#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceManager {
        inline app::TurbulenceManager__Class** type_info = (app::TurbulenceManager__Class**)(modloader::win::memory::resolve_rva(0x0478DB70));
        inline app::TurbulenceManager__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceManager__Class>(type_info, "", "TurbulenceManager");
        }
        inline app::TurbulenceManager* create() {
            return il2cpp::create_object<app::TurbulenceManager>(get_class());
        }
    } // namespace TurbulenceManager
} // namespace app::classes::types
