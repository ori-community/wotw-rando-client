#pragma once
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Color32__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Color32__Array {
        inline app::Color32__Array__Class** type_info() {
            static app::Color32__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Color32__Array__Class**)(modloader::win::memory::resolve_rva(0x0472F300));
            }
            return cache;
        }
        inline app::Color32__Array__Class* get_class() {
            return il2cpp::get_class<app::Color32__Array__Class>(type_info(), "UnityEngine", "Color32[]");
        }
        inline app::Color32__Array* create() {
            return il2cpp::create_object<app::Color32__Array>(get_class());
        }
    } // namespace Color32__Array
} // namespace app::classes::types
