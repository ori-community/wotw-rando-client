#pragma once
#include <Modloader/app/structs/RectOffset.h>
#include <Modloader/app/structs/RectOffset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectOffset {
        inline app::RectOffset__Class** type_info() {
            static app::RectOffset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RectOffset__Class**)(modloader::win::memory::resolve_rva(0x0475FA00));
            }
            return cache;
        }
        inline app::RectOffset__Class* get_class() {
            return il2cpp::get_class<app::RectOffset__Class>(type_info(), "UnityEngine", "RectOffset");
        }
        inline app::RectOffset* create() {
            return il2cpp::create_object<app::RectOffset>(get_class());
        }
    } // namespace RectOffset
} // namespace app::classes::types
