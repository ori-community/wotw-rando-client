#pragma once
#include <Modloader/app/structs/MoonTrailSystem.h>
#include <Modloader/app/structs/MoonTrailSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrailSystem {
        inline app::MoonTrailSystem__Class** type_info() {
            static app::MoonTrailSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTrailSystem__Class**)(modloader::win::memory::resolve_rva(0x0471FC90));
            }
            return cache;
        }
        inline app::MoonTrailSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailSystem__Class>(type_info(), "Moon", "MoonTrailSystem");
        }
        inline app::MoonTrailSystem* create() {
            return il2cpp::create_object<app::MoonTrailSystem>(get_class());
        }
    } // namespace MoonTrailSystem
} // namespace app::classes::types
