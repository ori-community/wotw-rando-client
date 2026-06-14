#pragma once
#include <Modloader/app/structs/Camera__Array.h>
#include <Modloader/app/structs/Camera__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Camera__Array {
        inline app::Camera__Array__Class** type_info() {
            static app::Camera__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Camera__Array__Class**)(modloader::win::memory::resolve_rva(0x04713F10));
            }
            return cache;
        }
        inline app::Camera__Array__Class* get_class() {
            return il2cpp::get_class<app::Camera__Array__Class>(type_info(), "UnityEngine", "Camera[]");
        }
        inline app::Camera__Array* create() {
            return il2cpp::create_object<app::Camera__Array>(get_class());
        }
    } // namespace Camera__Array
} // namespace app::classes::types
