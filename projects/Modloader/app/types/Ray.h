#pragma once
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/Ray__Array.h>
#include <Modloader/app/structs/Ray__Boxed.h>
#include <Modloader/app/structs/Ray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ray {
        inline app::Ray__Class** type_info() {
            static app::Ray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ray__Class**)(modloader::win::memory::resolve_rva(0x04796040));
            }
            return cache;
        }
        inline app::Ray__Class* get_class() {
            return il2cpp::get_class<app::Ray__Class>(type_info(), "UnityEngine", "Ray");
        }
        inline app::Ray* create() {
            return il2cpp::create_object<app::Ray>(get_class());
        }
        inline app::Ray__Boxed* box(app::Ray value) {
            return il2cpp::box_value<app::Ray__Boxed>(get_class(), value);
        }
        inline app::Ray__Array* create_array(int size) {
            return il2cpp::array_new<app::Ray__Array>(get_class(), size);
        }
        inline app::Ray__Array* create_array(const std::vector<app::Ray>& items) {
            return il2cpp::array_new<app::Ray__Array>(get_class(), items);
        }
    } // namespace Ray
} // namespace app::classes::types
