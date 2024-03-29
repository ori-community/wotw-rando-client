#pragma once
#include <Modloader/app/structs/MoonGizmos.h>
#include <Modloader/app/structs/MoonGizmos__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonGizmos {
        inline app::MoonGizmos__Class** type_info() {
            static app::MoonGizmos__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonGizmos__Class**)(modloader::win::memory::resolve_rva(0x0478C538));
            }
            return cache;
        }
        inline app::MoonGizmos__Class* get_class() {
            return il2cpp::get_class<app::MoonGizmos__Class>(type_info(), "Moon", "MoonGizmos");
        }
        inline app::MoonGizmos* create() {
            return il2cpp::create_object<app::MoonGizmos>(get_class());
        }
    } // namespace MoonGizmos
} // namespace app::classes::types
