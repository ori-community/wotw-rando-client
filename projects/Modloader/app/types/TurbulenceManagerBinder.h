#pragma once
#include <Modloader/app/structs/TurbulenceManagerBinder.h>
#include <Modloader/app/structs/TurbulenceManagerBinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceManagerBinder {
        inline app::TurbulenceManagerBinder__Class** type_info() {
            static app::TurbulenceManagerBinder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceManagerBinder__Class**)(modloader::win::memory::resolve_rva(0x04752C40));
            }
            return cache;
        }
        inline app::TurbulenceManagerBinder__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceManagerBinder__Class>(type_info(), "", "TurbulenceManagerBinder");
        }
        inline app::TurbulenceManagerBinder* create() {
            return il2cpp::create_object<app::TurbulenceManagerBinder>(get_class());
        }
    } // namespace TurbulenceManagerBinder
} // namespace app::classes::types
