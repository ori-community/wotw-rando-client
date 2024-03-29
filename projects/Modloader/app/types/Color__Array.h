#pragma once
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Color__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Color__Array {
        inline app::Color__Array__Class** type_info() {
            static app::Color__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Color__Array__Class**)(modloader::win::memory::resolve_rva(0x04788A48));
            }
            return cache;
        }
        inline app::Color__Array__Class* get_class() {
            return il2cpp::get_class<app::Color__Array__Class>(type_info(), "UnityEngine", "Color[]");
        }
        inline app::Color__Array* create() {
            return il2cpp::create_object<app::Color__Array>(get_class());
        }
    } // namespace Color__Array
} // namespace app::classes::types
