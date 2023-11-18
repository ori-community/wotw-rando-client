#pragma once
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/Rect__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rect__Array {
        inline app::Rect__Array__Class** type_info() {
            static app::Rect__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Rect__Array__Class**)(modloader::win::memory::resolve_rva(0x04743538));
            }
            return cache;
        }
        inline app::Rect__Array__Class* get_class() {
            return il2cpp::get_class<app::Rect__Array__Class>(type_info(), "UnityEngine", "Rect[]");
        }
        inline app::Rect__Array* create() {
            return il2cpp::create_object<app::Rect__Array>(get_class());
        }
    } // namespace Rect__Array
} // namespace app::classes::types
