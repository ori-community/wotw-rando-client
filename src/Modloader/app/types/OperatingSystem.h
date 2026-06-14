#pragma once
#include <Modloader/app/structs/OperatingSystem.h>
#include <Modloader/app/structs/OperatingSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OperatingSystem {
        inline app::OperatingSystem__Class** type_info() {
            static app::OperatingSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OperatingSystem__Class**)(modloader::win::memory::resolve_rva(0x04732ED0));
            }
            return cache;
        }
        inline app::OperatingSystem__Class* get_class() {
            return il2cpp::get_class<app::OperatingSystem__Class>(type_info(), "System", "OperatingSystem");
        }
        inline app::OperatingSystem* create() {
            return il2cpp::create_object<app::OperatingSystem>(get_class());
        }
    } // namespace OperatingSystem
} // namespace app::classes::types
