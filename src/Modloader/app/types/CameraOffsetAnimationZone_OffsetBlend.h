#pragma once
#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend__Array.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetAnimationZone_OffsetBlend {
        inline app::CameraOffsetAnimationZone_OffsetBlend__Class** type_info() {
            static app::CameraOffsetAnimationZone_OffsetBlend__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraOffsetAnimationZone_OffsetBlend__Class**)(modloader::win::memory::resolve_rva(0x04773088));
            }
            return cache;
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraOffsetAnimationZone_OffsetBlend__Class>(type_info(), "", "CameraOffsetAnimationZone", "OffsetBlend");
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend* create() {
            return il2cpp::create_object<app::CameraOffsetAnimationZone_OffsetBlend>(get_class());
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraOffsetAnimationZone_OffsetBlend__Array>(get_class(), size);
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array* create_array(const std::vector<app::CameraOffsetAnimationZone_OffsetBlend*>& items) {
            return il2cpp::array_new<app::CameraOffsetAnimationZone_OffsetBlend__Array>(get_class(), items);
        }
    } // namespace CameraOffsetAnimationZone_OffsetBlend
} // namespace app::classes::types
