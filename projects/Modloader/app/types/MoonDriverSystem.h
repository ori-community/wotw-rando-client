#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonDriverSystem__Class.h>
#include <Modloader/app/structs/MoonDriverSystem.h>

namespace app::classes::types {
    namespace MoonDriverSystem {
        inline app::MoonDriverSystem__Class** type_info = (app::MoonDriverSystem__Class**)(modloader::win::memory::resolve_rva(0x0478EE20));
        inline app::MoonDriverSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonDriverSystem__Class>(type_info, "Moon", "MoonDriverSystem");
        }
        inline app::MoonDriverSystem* create() {
            return il2cpp::create_object<app::MoonDriverSystem>(get_class());
        }
    } // namespace MoonDriverSystem
} // namespace app::classes::types
