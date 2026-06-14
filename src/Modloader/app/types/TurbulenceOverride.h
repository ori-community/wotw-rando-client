#pragma once
#include <Modloader/app/structs/TurbulenceOverride.h>
#include <Modloader/app/structs/TurbulenceOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceOverride {
        inline app::TurbulenceOverride__Class** type_info() {
            static app::TurbulenceOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceOverride__Class**)(modloader::win::memory::resolve_rva(0x04781598));
            }
            return cache;
        }
        inline app::TurbulenceOverride__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceOverride__Class>(type_info(), "", "TurbulenceOverride");
        }
        inline app::TurbulenceOverride* create() {
            return il2cpp::create_object<app::TurbulenceOverride>(get_class());
        }
    } // namespace TurbulenceOverride
} // namespace app::classes::types
