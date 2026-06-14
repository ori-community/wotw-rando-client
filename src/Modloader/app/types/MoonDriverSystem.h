#pragma once
#include <Modloader/app/structs/MoonDriverSystem.h>
#include <Modloader/app/structs/MoonDriverSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonDriverSystem {
        inline app::MoonDriverSystem__Class** type_info() {
            static app::MoonDriverSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonDriverSystem__Class**)(modloader::win::memory::resolve_rva(0x0478EE20));
            }
            return cache;
        }
        inline app::MoonDriverSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonDriverSystem__Class>(type_info(), "Moon", "MoonDriverSystem");
        }
        inline app::MoonDriverSystem* create() {
            return il2cpp::create_object<app::MoonDriverSystem>(get_class());
        }
    } // namespace MoonDriverSystem
} // namespace app::classes::types
