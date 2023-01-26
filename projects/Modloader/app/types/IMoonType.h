#pragma once
#include <Modloader/app/structs/IMoonType.h>
#include <Modloader/app/structs/IMoonType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonType {
        inline app::IMoonType__Class** type_info() {
            static app::IMoonType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonType__Class**)(modloader::win::memory::resolve_rva(0x0476B508));
            }
            return cache;
        }
        inline app::IMoonType__Class* get_class() {
            return il2cpp::get_class<app::IMoonType__Class>(type_info(), "Moon", "IMoonType");
        }
    } // namespace IMoonType
} // namespace app::classes::types
