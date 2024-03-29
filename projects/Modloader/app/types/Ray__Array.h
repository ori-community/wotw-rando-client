#pragma once
#include <Modloader/app/structs/Ray__Array.h>
#include <Modloader/app/structs/Ray__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ray__Array {
        inline app::Ray__Array__Class** type_info() {
            static app::Ray__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ray__Array__Class**)(modloader::win::memory::resolve_rva(0x04719160));
            }
            return cache;
        }
        inline app::Ray__Array__Class* get_class() {
            return il2cpp::get_class<app::Ray__Array__Class>(type_info(), "UnityEngine", "Ray[]");
        }
        inline app::Ray__Array* create() {
            return il2cpp::create_object<app::Ray__Array>(get_class());
        }
    } // namespace Ray__Array
} // namespace app::classes::types
