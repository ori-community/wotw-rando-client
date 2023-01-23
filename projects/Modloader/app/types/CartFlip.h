#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartFlip__Class.h>
#include <Modloader/app/structs/CartFlip.h>

namespace app::classes::types {
    namespace CartFlip {
        inline app::CartFlip__Class** type_info = (app::CartFlip__Class**)(modloader::win::memory::resolve_rva(0x04776568));
        inline app::CartFlip__Class* get_class() {
            return il2cpp::get_class<app::CartFlip__Class>(type_info, "", "CartFlip");
        }
        inline app::CartFlip* create() {
            return il2cpp::create_object<app::CartFlip>(get_class());
        }
    } // namespace CartFlip
} // namespace app::classes::types
