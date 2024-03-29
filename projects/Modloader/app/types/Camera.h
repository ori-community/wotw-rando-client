#pragma once
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Camera__Array.h>
#include <Modloader/app/structs/Camera__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Camera {
        inline app::Camera__Class** type_info() {
            static app::Camera__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Camera__Class**)(modloader::win::memory::resolve_rva(0x047639B8));
            }
            return cache;
        }
        inline app::Camera__Class* get_class() {
            return il2cpp::get_class<app::Camera__Class>(type_info(), "UnityEngine", "Camera");
        }
        inline app::Camera* create() {
            return il2cpp::create_object<app::Camera>(get_class());
        }
        inline app::Camera__Array* create_array(int size) {
            return il2cpp::array_new<app::Camera__Array>(get_class(), size);
        }
        inline app::Camera__Array* create_array(const std::vector<app::Camera*>& items) {
            return il2cpp::array_new<app::Camera__Array>(get_class(), items);
        }
    } // namespace Camera
} // namespace app::classes::types
