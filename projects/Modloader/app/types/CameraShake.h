#pragma once
#include <Modloader/app/structs/CameraShake.h>
#include <Modloader/app/structs/CameraShake__Array.h>
#include <Modloader/app/structs/CameraShake__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraShake {
        inline app::CameraShake__Class** type_info() {
            static app::CameraShake__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraShake__Class**)(modloader::win::memory::resolve_rva(0x047914B0));
            }
            return cache;
        }
        inline app::CameraShake__Class* get_class() {
            return il2cpp::get_class<app::CameraShake__Class>(type_info(), "", "CameraShake");
        }
        inline app::CameraShake* create() {
            return il2cpp::create_object<app::CameraShake>(get_class());
        }
        inline app::CameraShake__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraShake__Array>(get_class(), size);
        }
        inline app::CameraShake__Array* create_array(const std::vector<app::CameraShake*>& items) {
            return il2cpp::array_new<app::CameraShake__Array>(get_class(), items);
        }
    } // namespace CameraShake
} // namespace app::classes::types
