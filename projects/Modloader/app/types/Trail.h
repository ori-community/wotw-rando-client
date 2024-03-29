#pragma once
#include <Modloader/app/structs/Trail.h>
#include <Modloader/app/structs/Trail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trail {
        inline app::Trail__Class** type_info() {
            static app::Trail__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Trail__Class**)(modloader::win::memory::resolve_rva(0x0474ED20));
            }
            return cache;
        }
        inline app::Trail__Class* get_class() {
            return il2cpp::get_class<app::Trail__Class>(type_info(), "Moon", "Trail");
        }
        inline app::Trail* create() {
            return il2cpp::create_object<app::Trail>(get_class());
        }
    } // namespace Trail
} // namespace app::classes::types
