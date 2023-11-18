#pragma once
#include <Modloader/app/structs/Timeout.h>
#include <Modloader/app/structs/Timeout__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Timeout {
        inline app::Timeout__Class** type_info() {
            static app::Timeout__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Timeout__Class**)(modloader::win::memory::resolve_rva(0x0473AF80));
            }
            return cache;
        }
        inline app::Timeout__Class* get_class() {
            return il2cpp::get_class<app::Timeout__Class>(type_info(), "System.Threading", "Timeout");
        }
        inline app::Timeout* create() {
            return il2cpp::create_object<app::Timeout>(get_class());
        }
    } // namespace Timeout
} // namespace app::classes::types
