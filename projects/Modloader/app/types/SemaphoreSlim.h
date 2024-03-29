#pragma once
#include <Modloader/app/structs/SemaphoreSlim.h>
#include <Modloader/app/structs/SemaphoreSlim__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SemaphoreSlim {
        inline app::SemaphoreSlim__Class** type_info() {
            static app::SemaphoreSlim__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SemaphoreSlim__Class**)(modloader::win::memory::resolve_rva(0x04709A50));
            }
            return cache;
        }
        inline app::SemaphoreSlim__Class* get_class() {
            return il2cpp::get_class<app::SemaphoreSlim__Class>(type_info(), "System.Threading", "SemaphoreSlim");
        }
        inline app::SemaphoreSlim* create() {
            return il2cpp::create_object<app::SemaphoreSlim>(get_class());
        }
    } // namespace SemaphoreSlim
} // namespace app::classes::types
