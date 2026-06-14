#pragma once
#include <Modloader/app/structs/MoonFlagsSystem.h>
#include <Modloader/app/structs/MoonFlagsSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonFlagsSystem {
        inline app::MoonFlagsSystem__Class** type_info() {
            static app::MoonFlagsSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonFlagsSystem__Class**)(modloader::win::memory::resolve_rva(0x04749F00));
            }
            return cache;
        }
        inline app::MoonFlagsSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonFlagsSystem__Class>(type_info(), "", "MoonFlagsSystem");
        }
        inline app::MoonFlagsSystem* create() {
            return il2cpp::create_object<app::MoonFlagsSystem>(get_class());
        }
    } // namespace MoonFlagsSystem
} // namespace app::classes::types
