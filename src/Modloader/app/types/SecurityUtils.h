#pragma once
#include <Modloader/app/structs/SecurityUtils.h>
#include <Modloader/app/structs/SecurityUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityUtils {
        inline app::SecurityUtils__Class** type_info() {
            static app::SecurityUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityUtils__Class**)(modloader::win::memory::resolve_rva(0x047482F0));
            }
            return cache;
        }
        inline app::SecurityUtils__Class* get_class() {
            return il2cpp::get_class<app::SecurityUtils__Class>(type_info(), "System", "SecurityUtils");
        }
        inline app::SecurityUtils* create() {
            return il2cpp::create_object<app::SecurityUtils>(get_class());
        }
    } // namespace SecurityUtils
} // namespace app::classes::types
