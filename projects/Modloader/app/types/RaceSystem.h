#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceSystem {
        inline app::RaceSystem__Class** type_info = (app::RaceSystem__Class**)(modloader::win::memory::resolve_rva(0x047354E0));
        inline app::RaceSystem__Class* get_class() {
            return il2cpp::get_class<app::RaceSystem__Class>(type_info, "", "RaceSystem");
        }
        inline app::RaceSystem* create() {
            return il2cpp::create_object<app::RaceSystem>(get_class());
        }
    } // namespace RaceSystem
} // namespace app::classes::types
