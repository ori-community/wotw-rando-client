#pragma once
#include <Modloader/app/structs/TurbulenceManager.h>
#include <Modloader/app/structs/TurbulenceManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceManager {
        inline app::TurbulenceManager__Class** type_info() {
            static app::TurbulenceManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceManager__Class**)(modloader::win::memory::resolve_rva(0x0478DB70));
            }
            return cache;
        }
        inline app::TurbulenceManager__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceManager__Class>(type_info(), "", "TurbulenceManager");
        }
        inline app::TurbulenceManager* create() {
            return il2cpp::create_object<app::TurbulenceManager>(get_class());
        }
    } // namespace TurbulenceManager
} // namespace app::classes::types
