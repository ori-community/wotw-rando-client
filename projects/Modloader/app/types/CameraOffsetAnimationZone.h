#pragma once
#include <Modloader/app/structs/CameraOffsetAnimationZone.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone__Array.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetAnimationZone {
        inline app::CameraOffsetAnimationZone__Class** type_info() {
            static app::CameraOffsetAnimationZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraOffsetAnimationZone__Class**)(modloader::win::memory::resolve_rva(0x04765078));
            }
            return cache;
        }
        inline app::CameraOffsetAnimationZone__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetAnimationZone__Class>(type_info(), "", "CameraOffsetAnimationZone");
        }
        inline app::CameraOffsetAnimationZone* create() {
            return il2cpp::create_object<app::CameraOffsetAnimationZone>(get_class());
        }
        inline app::CameraOffsetAnimationZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraOffsetAnimationZone__Array>(get_class(), size);
        }
        inline app::CameraOffsetAnimationZone__Array* create_array(const std::vector<app::CameraOffsetAnimationZone*>& items) {
            return il2cpp::array_new<app::CameraOffsetAnimationZone__Array>(get_class(), items);
        }
    } // namespace CameraOffsetAnimationZone
} // namespace app::classes::types
